//open/prayer/room/2elder6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "执法长老房");
  set ("long", @LONG

	    你己来到了执法长老的大厅了，往南走正
	是长老的办公室，而北边及西边都有传来阵阵
	的武斗声，看来圣火教的弟子们的功夫都应该
	不错．

LONG);

  set("exits", ([ /* sizeof() ==  4*/
	"out" : "/open/prayer/room/train1-9",		//`走廊
	"north" : "/open/prayer/room/2elder5",		//`长老房
	"south" : "/open/prayer/room/2elder7",		//`长老房
	"west" : "/open/prayer/room/2elder3",		//`长老房
]));
  set("light_up", 1);

  setup();
}

// 干扰 tin by ACKY
void init()
{
	object me;
	me = this_player();
	remove_call_out("check");
	if( me->query_temp("elder2") > 3 ) {
		tell_room( this_object(), "圣火教弟子急忙将" + me->query("name") + "拉了过去。\n", me );
		if( random(2) ) me->move("/open/prayer/room/2elder7");
		else            me->move("/open/prayer/room/2elder5");
		me->delete_temp("elder2");
		me->start_busy(2);
		message_vision( HIY"弟子说道: 别慌慌张张地乱闯, 这里可是执法长老执法的地方唷。\n"NOR, me );
	}
	else {
		me->add_temp( "elder2", 1 );
		call_out( "check", 300, me );
	}
}

int check( object me )
{
    if(me)
	me->delete_temp("elder2");
	return 1;
}
