//open/prayer/room/punch1-3 

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "圣火教总坛");
  set ("long", @LONG

    一进到这，你感到奇怪，为何这个房间比所有总坛的房间来得小，你
定神一看，因为一个身长八尺的巨汉正站在厅堂上，倾听教徒们的回报，
而正在一一处理着，而这也是圣火教副教主的房间，那巨汉莫非是圣火教
的副教主了？

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/warrior" : 1,        	//副帮主
]));
  set("exits", ([ /* sizeof() == 3 */
	"enter" : "/open/prayer/room/punch1-5",		//副帮主的房间
	"south" : "/open/prayer/room/punch1-7",		//大听
	"west" : "/open/prayer/room/punch1",		//帮主
]));
  set("light_up", 1);

  setup();
}
 
