#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
�����ұڲ����Ǳ����Ȫˮ, ȡ����֮����һЩ
�ڻ�����Ʒ, ���ֱ������������۾�, �������ұ�
խ�����澹Ȼ����ж���!!
LONG);
set("exits",([
"up":__DIR__"g-h07",
"west":__DIR__"g-h09",
"east":__DIR__"g-h10",
]));
set("no_transmit",1);
setup();
}

