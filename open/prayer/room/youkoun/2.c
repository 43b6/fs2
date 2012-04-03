//open/prayer/room/youkoun/2.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","瑶光门大厅");
        set("long",@LONG

        西武林中一个势力庞大的组织, 人们统称她为「圣火教”
        , 又称为明教. 此处是明教分部之一的瑶光门, 宝座上坐
        的着正是瑶光门门主. 瑶光门是圣火教排行第七的支门.

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"4",     //大厅
        "east":__DIR__"1",              //右护法
        "west":__DIR__"3",              //左护法
 
        ]) );
        set("light_up", 1);
        set("valid_startroom", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/youkoun" : 1,         //门主
]));
  setup();
}
