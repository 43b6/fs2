//open/prayer/room/3elder7

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "戒律长老房");
  set ("long", @LONG

	    这里有一个圣火弟子，正被戒律长老处罚
	在蹲马步，看来这位圣火弟子又做错事而被处
	罚．

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/trainee1" : 1,		//弟子
]));
  set("exits", ([ /* sizeof() ==  2*/
	"north" : "/open/prayer/room/3elder6",		//`长老房
	"east" : "/open/prayer/room/3elder4",		//`长老房
]));
  set("light_up", 1);

  setup();
}
 
