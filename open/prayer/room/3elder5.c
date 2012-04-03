//open/prayer/room/3elder5

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "戒律长老房");
  set ("long", @LONG

	    你的正前方有两个弟子正在相互套招，两
	人练得大汗淋漓，但两人似乎没有要停下来休
	息的意思．

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/prayer/npc/trainee4" :  1,		//弟子
  "/open/prayer/npc/trainee1" :  1,		//弟子

]));
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/3elder6",		//`长老房
	"east" : "/open/prayer/room/3elder2",		//`长老房
]));
  set("light_up", 1);

  setup();
}
 
