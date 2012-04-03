// Room: /u/o/onion/room/armory.c

inherit ROOM;

void create()
{
	set("short", "镳局练武场");
	set("long", @LONG
这里三三两两到处都有许多人在此练功夫,拳脚棍棒,虎虎生风,各地各式的功夫
你都可以见到,每个人都卖力的练到满身大汗,想到自己多么的偷懒,不禁有一丝愧意.

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"armory",
]));
	set("objects", (["/u/o/onion/npc/bully" : 3 ]));

	setup();
}
