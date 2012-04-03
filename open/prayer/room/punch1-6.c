//open/prayer/room/punch1-6

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "军师的房间");
  set ("long", @LONG

    你突然闻到一股书香味，仔细一看这房间书柜的书，比圣火教军师所
在的房间里的书还要多上好几倍，真的使人觉得军师对文学的造诣，有着
种深不可测的感觉． 

LONG);

  set("light_up",1);
  set("no_fight",1);
  set("exits", ([ /* sizeof() == 1 */
	"out" : "/open/prayer/room/punch1-4",		//`军师
]));

  setup();
}
 
