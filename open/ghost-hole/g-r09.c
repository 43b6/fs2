#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"幽冥道"NOR"草屋");
        set("long",@LONG
简单的装饰品挂满了整个茅草屋, 这些装饰看来
与在人间界可以看到的装饰品并无两样, 由此可见得
住这的人十分向往人间界...
LONG);
        set("exits",([
        "east":__DIR__"g-r08",
        ]));
        set("no_transmit",1);
        setup();
}
