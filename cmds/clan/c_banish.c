// c_banish.c 将帮众逐出帮派
#include <ansi.h>

inherit F_CLEAN_UP;

int help(object me);

int main( object me, string id )
{
	mapping clans;
	object  ob, user;
	string clan_id;

	if( !me->query("clan" ) )
		return notify_fail( "您没有加入任何帮派。\n" );
	if( !id )
		return notify_fail( "请问您想将谁逐出帮派?\n" );
	if( me->query("clan/rank" ) > 3 )
		return notify_fail( "您无权使用此指令。\n" );
	if( me->query("id" ) == id )
		return notify_fail( "无法自行将自己逐出帮派。\n" );

	clans = CLAN_D->query_all_clans();
	clan_id = me->query("clan/id");

	if( !user = FINGER_D->acquire_login_ob( id ) )
		return notify_fail( "无此人。\n" );
    if( wizardp(user))  // cgy 只改自己的?真自私..-.- by avgirl
	    return 0;
	if( !user = find_player( id ) ) {
		ob   = "/adm/daemons/cappointd.c" -> get_user_ob( id );
		user = "/adm/daemons/cappointd.c" -> get_user_body( ob );
		user -> set_temp( "link_ob", ob );
		user -> setup();
	}

	if( user->query("clan/id") != clan_id )
		return notify_fail( "此人并非贵帮之帮众。\n" );

	if( me -> query( "clan/rank" ) >= user -> query( "clan/rank" ) )
		return notify_fail( "只能将位阶比您低的帮众逐出。\n" );
	CHANNEL_D->do_channel(me, "ct",
		"\n\t我 -「"HIW+me->query("clan/title")+HIY"”遗憾地宣布……\n\t将"+
		HIR+ user->query("name")+HIY"("HIR+user->query("id")+HIY")逐出"+me->query("clan/name")+"。"NOR);
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
	c_banish <ID>：将某人逐出帮派。

	   	       只能逐出位阶比您低的帮众。

						by ACKY 2000/03/28
");
        return 1;
}
