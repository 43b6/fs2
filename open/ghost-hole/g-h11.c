#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"HIW"���׶���"NOR);
set("long",@LONG
���¶����ĵ������������ħ�����, ���ܵ�
�ұڶ�������, ȡ����֮���ǹ����Ŀռ�, ��Χ��
������, ��ɫ�·�һƬ����, ���޵�����������, 
һƬ����....
LONG);
set("exits",([
"north":__DIR__"g-h12",
"south":__DIR__"g-h12",
"east":__DIR__"g-h12",
"west":__DIR__"g-h12",
]));
set("no_transmit",1);
setup();
}
