#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",HIW"走道"NOR);
set("long",@LONG
西边的门槛上挂着一个‘刀叉’铜制模型版，你可以清楚的了解到西边是这艘
船的餐厅，如果你肚子饿了的话，或许可以去那边找一些东西出来吃吧，但是要小
心吃到有毒的物品。
LONG);
set("exits",([
"north":__DIR__"b_r05",
"south":__DIR__"b_r07",
"west":__DIR__"room03",
]));
setup();
}