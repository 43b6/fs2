#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG
�ڰ��Ŀռ�����Χ���ұ�һֱ����һ���޷�������
ѹ�ȸ�, �ټ���������ұ��ƺ��ر�ĳ�ʪ, ������һ
�ֻ�֮��ȥ������...
LONG);
set("exits",([
"down":__DIR__"g-h07",
]));
set("no_transmit",1);
setup();
}
