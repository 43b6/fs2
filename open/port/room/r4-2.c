// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","西大街");
  set ("long", @LONG
你正走在西大街上 . 俗话说 : 百日刀 , 千日剑 . 由于刀
是最容易上手的武器 , 而且普及度极高 , 因此 , 刀成为时下
最流行的武器 . 不过 , 要想将刀的霸气完全发挥 , 还是得下
过一番苦心才行 . 北边为本国规模最大的刀器专卖店 , 南边是
防具店 .

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r4-3",
	"west" : "/open/port/room/r4-1",
	"north" : "/open/port/room/r4-4",
	"south" : "/open/port/room/r4-5",
]));
	set("objects",([
	]));

  setup();
}
