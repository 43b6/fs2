#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
�����ұڸ�����һ��ѹ�ȸУ������������ܲ���
�����κ����صĳ���ڣ��������ϵ�ͨ�������µ�·
�⣬���ƺ�Ҳ����ѡ���ˡ�
LONG);
set("exits",([
"up":__DIR__"g-h02",
"down":__DIR__"g-h04",
]));
set("no_transmit",1);
setup();
}
