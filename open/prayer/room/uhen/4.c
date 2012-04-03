//open/prayer/room/uhen/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","玉衡门大厅");
        set("long",@LONG

	西武林中一个势力庞大的组织, 人们统称她为「圣火教”
	, 又称为明教. 此处是明教分部之一的玉衡门, 门上所坐
	的是玉衡门的门主. 玉衡门是圣火教排行第五的支门．

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"1",	//门主房间
        "south":__DIR__"7",	//大厅
        "east":__DIR__"3",		//右护法
        "west":__DIR__"5",		//左护法
 
        ]) );
        set("light_up", 1);
        set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/uhen" : 1,		//门主
]));
  setup();
}
