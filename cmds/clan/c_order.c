// c_order.c by ACKY

inherit F_CLEAN_UP;
#include <ansi.h>

int main( object me, string arg )
{
	string dest, cmd;
	object ob;

	if( me != this_player(1) ) return 0;
	if( !me->query("clan") )   return 0;
	if( !arg || sscanf( arg, "%s to %s", dest, cmd ) != 2 )
		return notify_fail( "ָ���ʽ: c_order <����> to <����>\n" );
	if( !( ob = present( dest, environment(me) ) ) )
		return notify_fail( "�Ҳ��� " + dest + "��\n" );
	if( me->query("clan/id") != ob->query("clan/id") )
                return notify_fail( "�޷�����������֮���ڡ�\n" );
	if( me->query("clan/rank") >= ob->query("clan/rank") )
		return notify_fail( "��û�к���" + ob->name() + "��Ȩ����\n" );
	if( !userp(ob) )
		return notify_fail( "��û�к���" + ob->name() + "��Ȩ����\n" );
//		write_file( "/u/a/acky/bug/corder-" + ctime(time())[4..6],
//			sprintf( "%s %s c_order %s\n", ctime(time())[0..15], me->query("id"), arg ), 0 );
	if( !userp(ob) && CLAN_D->what_clan_area(ob) == "NULL" ) {
		ob->do_command( "say �ҵ�ְ�����ػ�" + ob->query("clan/name") + "��" );
		ob->do_command( "wave" );
		destruct(ob);
		return 1;
	}
	if( strsrch( cmd, "set" ) != -1 )
		return 0;
	if( !living(ob) )
		return notify_fail( "���ڸð����޷����\n" );
	message_vision( HIY"$N����$n���� "+cmd+"��\n"NOR, me, ob );
	return ob->force_me(cmd);
}

int help( object me )
{
        write( @HELP
ָ���ʽ: c_order <ĳ��> to <����>
ָ��˵��: ����������¡�

                                                by ACKY 08/17/2000
HELP);
        return 1;
}
