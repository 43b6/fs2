// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","中央大街");
  set ("long", @LONG
你正走在枫林港最热闹的中央大街上 . 这一带是枫林港的闹
区 , 街道两旁挤满了摊贩 , 行人 , 各式各样的商品令人目不暇
给 东边是药铺 ,西边则是驿站.

LONG);

  set("light_up", 1);
	set("outdoors", "/open/port");
  set("exits", ([ /* sizeof() == 2 */
	"east" : "/open/port/room/r1-8",
    "west" : "/open/trans/room/room10",
	"south" : "/open/port/room/r1-4",
	"north" : "/open/port/room/r1-2",
]));
	set("objects",([
	]));

  setup();
}
