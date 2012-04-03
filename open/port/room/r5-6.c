// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","渔户");
  set ("long", @LONG
你正处于一间破旧的小屋里 , 这是一对老渔夫妇的家 . 如
今他们早已不再出海打鱼了 , 平日只是坐在门口 , 吹吹海风 ,
看看渔港 .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r5-4",
]));
	set("objects",([
	"/open/port/npc/oldman":1,
	"/open/port/npc/oldwoman":1,
	]));

  setup();
}
