#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
���϶���������ʳ�����, ��������Ǿ�ס��
�����˵�ʳ�ﴢ����, ����Ŀ����ƺ��������ĵط�
��������, �ѹֻᱻѡ������ʳ��ĵط�...
LONG);
set("outside",1);
set("exits",([
"east":__DIR__"g-h08",
]));
set("objects",([
"/obj/example/chicken_leg":1,
"/open/capital/obj/tea":1,
]));
set("no_transmit",1);
setup();
}
