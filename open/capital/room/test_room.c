// Room: /open/capital/room/r69.c
// rewrite by wade 1/5/1996
// 改成用 heart_beat 的方式

#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "考场");
	set( "build", 19 );
  set ("long", @LONG
这里是考场，每年的科举考试都是由这里举行，在这里，常常可以
看到一群为求功名而苦读数十年的读书人们，个个都想在考试中得取功
名,有一张布告(board)公告着.

LONG);

 set("item_desc", ([
  "board" : "一加入官府,就必须与原帮派脱离所有关系,你可要考虑清楚!!!\n",
    ]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/capital/room/r71",
]));

  set("objects", ([ /* sizeof() == 1 */
	CAPITAL_NPC"test_officer"	:	1,
]));

  set("no_kill", 1);
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}
