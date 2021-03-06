// c_set.c by ACKY
#include <ansi.h>
#include <clanf.h>
string msg;

int main( object me )
{
	if( !me->query("clan") ) return 0;
	if( me->query("clan/rank") > 2 )
		return notify_fail( "您无权使用此指令。\n" );
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail( "此区域并非本帮之地盘。\n" );

	msg = "
	[0] 放弃设定
	[1] 帮派钱庄
	[2] 帮派兵营
	[3] 帮派闸门
	[4] 帮派核心
	[5] 帮派监狱

	欲将此区域设为? [0~5] : ";

	write(msg);
	input_to( "ask", me );

	return 1;
}

void ask( string arg, object me )
{
	int  n;

	if( sscanf( arg, "%d", n )!=1 || n<0 || n>5 ) {
		tell_object( me, CLR );
		write(msg);
		input_to( "ask", me );
		return;
	}

	switch( n ) {
	case 0 :
		return;
	case 1 :
		arg = "bank";
		msg = "钱庄";
		break;
	case 2 :
		arg = "npc_room";
		msg = "兵营";
		break;
	case 3 :
		arg = "gate";
		msg = "闸门";
		break;
	case 4 :
		arg = "home";
		msg = "核心";
		C_ROOM->update_room( CLAN_D->clan_query( me->query("clan/id"), "home" ) );
		CLAN_D->clan_set( me->query("clan/id"), arg, base_name(environment(me)) );
		C_ROOM->update_keep( "/open/clan/" + me->query("clan/id") + "/room/hall" );
		break;
	case 5 :
		arg = "jail";
		msg = "监狱";
	}

	CLAN_D->clan_set( me->query("clan/id"), arg, base_name(environment(me)) );
	CHANNEL_D->do_channel( me, "ct",
			"\n\t我 -「"HIW + me->query("clan/title") + HIY"”郑重的宣布……\n\t" +
			"将本帮之"HIG + msg + HIY"设于"HIC + environment(me)->short() + HIY"。"NOR );
}

int help( object me )
{
	write( "
	c_set: 设定帮派区域。

                                                         by ACKY 2000/08/17
" );
	return 1;
}

