#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
���ܵ��ұڲ��ϵ����������Ȫˮ, ����΢����
һ��, Ȫˮ����Ю��������ɰʯ, �������ܺ�, ��
��ԼԼ֮��, ��·��������˵İ�����, �治������
��������˾�ס!!
LONG);
set("exits",([
"up":__DIR__"g-h05",
"down":__DIR__"g-h08",
]));
set("no_transmit",1);
setup();
}
