inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",HIR"���ҵ�"NOR);
        set("long",@LONG
���ҵ�
LONG);
        set("exits",([
"north":__DIR__"d-10",
]));
        set("objects",([
__DIR__"npc/fire-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        set("fire-area",1);
        setup();
}
