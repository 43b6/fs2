// Room: /open/capital/room/g2
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "石室");
	set( "build", 2 );
  set ("long", @LONG
这里是一间封闭的地下石室, 但不知从哪里有阵阵的空气流通, 因
此也不觉得窒碍, 四周摆着一些石桌(table)石椅(chair), 显然是以大
力劈成。

LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "table" : "一张普通的石桌, 没有啥出奇的地方, 不过看来很厚重, 推都推不动。
",
  "chair" : "劈成歪歪斜斜的椅子, 不过就是还蛮稳固的。
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/duan2" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"q1",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "table" : "虽然这石桌重的无法移动, 但在你契而不舍的努力下, 终于发现这石桌似乎可以转动(turn)。
",
]));

  setup();
}
void init()
{
	add_action("do_turn","turn");
	add_action("do_climb","climb");
}
int do_turn(string str)
{
	if( str != "table" )
	  return notify_fail("转什么?\n");
        if( present("great thief",this_object()) || present("chao",this_object()) )
	  return notify_fail("大盗挡着你说道：动手动脚的做什么?\n");
	set_temp("open_hole",1);
	tell_room(this_object(),"你用尽全身的力量转动石桌, 随着嘎拉嘎拉的声音, 石室顶上露出一个大洞。\n看来似乎可以从这个洞爬(climb)出去说。\n");
	set ("long", @LONG
这里是一间封闭的地下石室, 但不知从哪里有阵阵的空气流通, 因
此也不觉得窒碍, 四周摆着一些石桌(table)石椅(chair), 显然是以大
力劈成。
    石室上头露出一个大洞。	  

LONG);
	return 1;
}
int do_climb(string str)
{
	object me=this_player();
	if( !this_object()->query_temp("open_hole") )
	  return notify_fail("这里没有洞可以爬出去。\n");
    message_vision("$N施展轻功纵身一跳, 跳出了这个石室。\n",me);
	me->move(MAIN_ROOM"s18");
	return 1;
}
	
