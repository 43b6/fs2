inherit ROOM;
#include <ansi.h>
void create()
{
set("short","松林");
set("long",@LONG
只见此地一大片的松树林，枝丫参天，葱翠墨绿，仿佛见不着边
际，在路旁有着一块告示牌( sign )，林中辟出一条小径，直往着峰
顶通去。
LONG);
set("exits",([ /* sizeof() == 3 */
"down" : __DIR__"bridge1.c",
"up" : __DIR__"tree2.c",
]));
set("item_desc", ([
"sign":@TEXT
             此处列为～禁地～，踏入者后果自行负责。
                                               
                                             天道派
TEXT,
]) );
set("outdoors",1);
setup();

}


