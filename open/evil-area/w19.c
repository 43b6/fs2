inherit ROOM;
#include <ansi.h>
#include <damage01.c>

void create()
{
        set("short",RED"-"BLU"="HIY"��"HIG"��"HIC"��"NOR+BLU"="RED"-"NOR);
        set("long",@LONG

�߲ʵ�ͨ�������ϵ�������, ��·�����һ��Բ����, ������ǰ���š�

LONG);
        set("exits",([
"west":__DIR__"w20",
"east":__DIR__"w15",
"south":__DIR__"w16",
"north":__DIR__"w17",
]));
	set("no_transmit",1);
	set_temp("evil-place",1);
        setup();
}

