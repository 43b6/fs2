#include <ansi.h>
inherit ROOM;
void create ()
{
set("short",BLU"�����Ĺ�"NOR);
set("long",@LONG 
�ڱ�����ұ���, ����һ��ʮ�Ƿϵ�����, һ��Ҳ
�������������, ���ǿն��������������ֱ���ĸо�
, ���϶���������й��, �������ƺ�û���뿪������, 
Ҳ�ƺ�Ҳû���뿪����Ĵ���...
LONG);
set("outside",1);
set("objects",([
__DIR__"npc/oldman":1,
]));
set("exits",([
"west":__DIR__"g-h08",
]));
set("no_transmit",1);
setup();
}
