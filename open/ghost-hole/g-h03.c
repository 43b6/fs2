#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"死灵幽谷"NOR);
set("long",@LONG
四周岩壁给了你一种压迫感，你摸黑着四周并无
发现任何奇特的出入口，除了往上的通道跟往下的路
外，你似乎也无所选择了。
LONG);
set("exits",([
"up":__DIR__"g-h02",
"down":__DIR__"g-h04",
]));
set("no_transmit",1);
setup();
}
