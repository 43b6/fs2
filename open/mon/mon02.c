inherit ROOM;
#include <ansi.h>

void create ()
{
        set ("short", "屋外空地");
        set ("long", @LONG
走到这里，赫然发现一间茅屋，整间茅屋的里里外外看起来已破
旧不堪，似乎已经久无人住了，空地上杂草丛生，但仍可以隐隐看到
一条被人走过的小径通到屋子里，屋外还有一块石头 (stone)，上头
似乎还刻画着一些图案，让你想走近一看究竟。
LONG);
        set("item_desc", ([ /* sizeof() == 1 */
        "stone" : "
          "HIR"但愿人长久                                   "NOR+YEL"﹀
            "HIR"千里共婵娟                               "NOR+YEL"﹀    "HIY"●
"HIB"▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁
▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃▃
"NOR+BLU"▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n"NOR,
]));

        set("outdoors", "");
        set("exits", ([ /* sizeof() == 4 */
        "enter" : __DIR__"mon01",
        "west" : __DIR__"mon03",
]));
        setup();
}

