// c_join.c by babe ^o^

inherit F_CLEAN_UP;

#include <ansi.h>

int help( object me )
{
	write(@HELP

����ָ��: c_join <���ID>

	������Ҽ�����ɡ�

HELP );
	return 1;
}

int main( object me, string arg )
{
	object ob;

	if( me->query("id") == "guest" )
		return 0;
	if( !me->query("clan") ) {
		if( !arg )
			return notify_fail( "c_join <���ID>\n" );
		if( !( ob = present( arg, environment(me) ) ) || !living(ob) || !ob->is_character() || ob == me )
			return notify_fail( "�������˭�İ���?\n" );
		if( ob->query_temp("c_join") != me->query("id") )
			return notify_fail( "�Է���û��������������ɡ�\n" );
		me->set( "clan/id", ob->query("clan/id") );
		me->set( "clan/name", ob->query("clan/name") );
		me->set( "clan/title", "�½�����" );
		me->set( "clan/rank", 6 );
		CLAN_D->is_member_or_add( ob->query("clan/id"), me->query("id"), 1 );
		message_vision( HIG"$N��������" + me->query("clan/name") + "��\n"NOR, me );
		log_file( "clan/cjoin", sprintf("[%s] %s %s �� %s\n",
			ctime(time())[0..15], ob->query("clan/name"), ob->query("id"), me->query("id") ) );
		CHANNEL_D->do_channel( me, "ct",
			"\n\t�� - " + me->query("name") + "(" + me->query("id") + "), ���췢��, ����Ч��" + me->query("clan/name") + "��\n" );
		return 1;
	}
	if( me->query("clan/rank") > 4 )
		return notify_fail( "��Ȩʹ�ô�ָ�\n" );
	if( !arg )
		return help(me);
	if( !( ob = present( arg, environment(me) ) ) || !living(ob) || !userp(ob) || wizardp(ob) || ob == me )
		return notify_fail( "��������˭�������?\n" );
	if( ob->query("clan/name") )
		return notify_fail( "�Է��Ѿ���" + ob->query("clan/name") + "�İ��ڡ�\n" );
	me->set_temp( "c_join", ob->query("id") );
	message_vision( HIY"$N��ֿ������$n����" + me->query("clan/name") + "��\n"NOR, me, ob );
	tell_object( ob, HIC"���Ը��, ���� c_join " + me->query("id") + " ����" + me->query("clan/name") + "��\n"NOR );
	return 1;
}
