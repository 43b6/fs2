inherit ROOM;
#include <ansi.h>
void create ()
{
set("short",YEL"��ڤ��"NOR);
set("long",@LONG
һ��������绺������, ���ܵľ���ʮ�ֵ�
����, �ƺ����������˼�һ��, �·�������ĳ����
�������...
LONG);
set("exits",([
"east":__DIR__"g-r02",
]));
set("no_transmit",1);
setup();
}
