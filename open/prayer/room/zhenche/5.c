//u/r/rence/room/zhenche/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","议事厅");
        set("long",@LONG

        这里是议事厅的正中央, 四周站着阵势门内的各高级主管
        , 有的正在向门主报告负责的事项, 有的则等待门主的最
        新指示.

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",             //议事厅
        "south":__DIR__"8",             //议事厅
        "east":__DIR__"4",              //议事厅
        "west":__DIR__"6",              //议事厅
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
   setup();
}
