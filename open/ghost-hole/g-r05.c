#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR"С��");
        set("long",@LONG
�ϱ���һ�������é����, ��˵����ס��һ��
ͨ����ڤ�������, Ҳ����Ӧ����ȥ�ݷ���һ��, 
��������������ħ����������...
LONG);
        set("exits",([
        "enter":__DIR__"g-r08",
        "north":__DIR__"g-r04",
        ]));
        set("no_transmit",1);
        setup();
}
