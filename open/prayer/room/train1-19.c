//open/prayer/room/train1-19

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "走廊");
  set ("long", @LONG

	    突然有阵阵的香味传来，原来是南方进去
	就是圣火教的伙房了，就在此时你的肚子咕噜
	咕噜叫了几声．

LONG);
  set("exits", ([ /* sizeof() == 2 */
	"enter" : "/open/prayer/room/kicthen6",		//`厨房
	"north" : "/open/prayer/room/train1-14",		//`走廊
]));
        set("objects",([ /* sizeof() == 1 */
  "/open/prayer/npc/footman" : 1,		//跑堂
   		
]));

  setup();
}
 
