// c_room_own.c by ACKY

inherit F_CLEAN_UP;
#include <ansi.h>

int help( object me )
{
        write( @HELP
ָ���ʽ: c_room_own <ID>
ָ��˵��: �趨����֮��Ϊĳ��֮ר������

	  c_room_own <ID>
	  ȡ��ĳ��֮ר������

                                                by ACKY 08/17/2000
HELP);
        return 1;
}

int main( object me, string arg )
{
        string filename, file, *strs, owner;
        object env, who;
        int i;

	seteuid(getuid());
        if( !me->query("clan") )   return 0;
        if( !arg ) return help(me);
	if( me->query("clan/rank") > 3 )
                return notify_fail( "�׼���������ʹ��Ȩ����\n" );
        if( !CLAN_D->is_clan_room(me) && !wizardp(me) )
		return notify_fail( "�����򲢷Ǳ����������̡�\n" );
	who = find_player(arg=lower_case(arg));
	if(!who) who = FINGER_D->acquire_login_ob(arg);
        if(!who) return notify_fail( "���޴��ˡ�\n" );

	env = environment(me);
        filename = base_name(env) + ".c";
	file = read_file(filename);
	strs = explode( file, "\n" );

	if( owner=env->query("owner") ) {
		if( arg != owner )
			return notify_fail( "�˴�Ϊ " + capitalize(owner) + " ������\n" );
		if( who->query("clan/id") == me->query("clan/id") &&
			who->query("clan/rank") <= me->query("clan/rank") &&
			me->query("id") != owner )
			return notify_fail( "��Ȩȡ�� " + capitalize(owner) + " ������\n" );
		for( i=0; i<sizeof(strs); i++ )
        		if( strsrch( strs[i], "\"owner\"" ) != -1 ) break;
		file = implode( strs[0..i-1], "\n" ) + "\n" +
			implode( strs[i+1..<0], "\n" ) + "\n";
		env->delete("owner");
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��������ȡ������\n\t" +
			who->query("name") + "��"HIC + environment(me)->query("short") + HIY"��ר��ʹ��Ȩ��"NOR );
	}
	else {
	        for( i=0; i<sizeof(strs); i++ )
			if( strsrch( strs[i], "\"short\"" ) != -1 ) break;
		strs[i] += "\n\tset( \"owner\", \"" + arg + "\" );";
		file = implode( strs, "\n" ) + "\n";
		env->set( "owner", arg );
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� -��"HIW + me->query("clan/title") + HIY"��֣�ص���������\n\t"
			HIC + environment(me)->query("short") + HIY"Ϊ" + who->query("name") + "��ר������"NOR );
	}

	write_file( filename, file, 1 );

	return 1;
}
