
inherit ROOM;
#include <ansi.h>

void create()
{
        set("short","��կ ������");
        set("long",@LONG
�������ϴ������£������������⣬���ⶼ��ʯ�ڰ�Χ�š�
LONG);
        set("no_transmit",1);
        set("exits",([
"up":__DIR__"r-46",
"down":__DIR__"r-44",
]));
        setup();
}
