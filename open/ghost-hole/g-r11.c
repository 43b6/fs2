#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR);
        set("long",@LONG
�ŵ�̤�ĺܲ�ʵ�ڣ��·�վ��ϡ�ɵ��������棬
һ���ʵ��Ҳû�У�����ż�����ǻᴫ������Ѫ�ȵ�
���ζ�����޷�������Լ����δ���
LONG);
        set("exits",([
        "west":__DIR__"g-r10",
        "north":__DIR__"g-r12",
        ]));
        set("no_transmit",1);
        setup();
}
