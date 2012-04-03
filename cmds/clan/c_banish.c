// c_banish.c �������������
#include <ansi.h>

inherit F_CLEAN_UP;

int help(object me);

int main( object me, string id )
{
	mapping clans;
	object  ob, user;
	string clan_id;

	if( !me->query("clan" ) )
		return notify_fail( "��û�м����κΰ��ɡ�\n" );
	if( !id )
		return notify_fail( "�������뽫˭�������?\n" );
	if( me->query("clan/rank" ) > 3 )
		return notify_fail( "����Ȩʹ�ô�ָ�\n" );
	if( me->query("id" ) == id )
		return notify_fail( "�޷����н��Լ�������ɡ�\n" );

	clans = CLAN_D->query_all_clans();
	clan_id = me->query("clan/id");

	if( !user = FINGER_D->acquire_login_ob( id ) )
		return notify_fail( "�޴��ˡ�\n" );
    if( wizardp(user))  // cgy ֻ���Լ���?����˽..-.- by avgirl
	    return 0;
	if( !user = find_player( id ) ) {
		ob   = "/adm/daemons/cappointd.c" -> get_user_ob( id );
		user = "/adm/daemons/cappointd.c" -> get_user_body( ob );
		user -> set_temp( "link_ob", ob );
		user -> setup();
	}

	if( user->query("clan/id") != clan_id )
		return notify_fail( "���˲��ǹ��֮���ڡ�\n" );

	if( me -> query( "clan/rank" ) >= user -> query( "clan/rank" ) )
		return notify_fail( "ֻ�ܽ�λ�ױ����͵İ��������\n" );
	CHANNEL_D->do_channel(me, "ct",
		"\n\t�� -��"HIW+me->query("clan/title")+HIY"���ź�����������\n\t��"+
		HIR+ user->query("name")+HIY"("HIR+user->query("id")+HIY")���"+me->query("clan/name")+"��"NOR);
	CLAN_D->clan_promote( clan_id, user->query("id"), "banish", user->query("clan/bank") );
	user -> delete( "clan" );
	user -> save();
	log_file("clan/cbanish", sprintf("[%s] %s cbanish <%s> .\n",
ctime(time())[0..15], me->query("id"),user->query("id")));
	if( !find_player( id ) )
		destruct(user);
	return 1;
}

int help( object me )
{
	write("
	c_banish <ID>����ĳ��������ɡ�

	   	       ֻ�����λ�ױ����͵İ��ڡ�

						by ACKY 2000/03/28
");
        return 1;
}
