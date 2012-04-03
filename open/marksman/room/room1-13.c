// Room: /u/f/fire/room/room1-13.c
inherit ROOM;
#include <ansi.h>
#include <marksman.h>
void create ()
{
  set ("short",GRN"长沙道"NOR);
  set ("long", @LONG
走这个长沙道之中而到处充满着鸟语花香的小路上，路旁的那些
花正飘来那浓郁的花香，闻着令人清爽的花香，耳边传来鸟儿们似乎
在嬉戏的叫声。
LONG);

  set("exits", ([ /* sizeof() == 2 */
"north" : __DIR__"room1-14",
"south" : __DIR__"room1-9",
"west" : "/open/trans/room/room7.c",
]));
set("outdoors","/open/marksman");

  setup();
}
