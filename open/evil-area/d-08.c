inherit ROOM;
#include <ansi.h>

void create()
{
        set("short",HBYEL+HIW"�ƽ���"NOR);
        set("long",@LONG
�ƽ���
LONG);
        set("exits",([
"south":__DIR__"d-07",
]));
        set("objects",([
__DIR__"npc/gold-worm":5,
]));
        set("no_transmit",1);
        set("evil-area",1);
        setup();
}
