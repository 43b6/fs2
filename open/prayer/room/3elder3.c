//open/prayer/room/3elder3

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "戒律长老房");
  set ("long", @LONG

	    从东边的大门进去就到了戒律厅了，在门
	口有二位弟子正奉命把守大门，看来弁律长老
	又在执行教规了．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 2,		//弟子
]));
  set("exits", ([ /* sizeof() ==  4*/
	"west" : "/open/prayer/room/3elder6",		//`长老房
	"north" : "/open/prayer/room/3elder2",		//`长老房
	"south" : "/open/prayer/room/3elder4",		//`长老房
	"east" : "/open/prayer/room/3elder1",		//`长老房
]));
  set("light_up", 1);

  setup();
}
 
