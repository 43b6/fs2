inherit ROOM;
#include <ansi.h>
void create ()
{
set("short",YEL"˫ڤ��̨"NOR);
set("long",@LONG
�����ƹ��š�����������˫ڤ���ļ�̨, ���˾������
, �ұ߹ܡ�����, ���ŵ���������̨����ʱ, ���������ħ
����֮ʱ...
    �������һ����ħ�ĵ���(statue)
LONG);
set("no_light",1);
set("exits",([
"up":__DIR__"g-r01",
"east":__DIR__"g-s02",
"west":__DIR__"g-s03",
]));
set("item_desc",([
"statue":"һ�������ħ�ĵ���, �о����ƺ��е����!!\n",
]));
set("no_transmit",1);
setup();
}
