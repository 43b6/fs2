#include <ansi.h>
inherit ROOM;
void create ()
{
        set("short",YEL"��ڤ��"NOR"����");
        set("long",@LONG
�򵥵�װ��Ʒ����������é����, ��Щװ�ο���
�����˼����Կ�����װ��Ʒ��������, �ɴ˿ɼ���
ס�����ʮ�������˼��...
LONG);
        set("exits",([
        "east":__DIR__"g-r08",
        ]));
        set("no_transmit",1);
        setup();
}
