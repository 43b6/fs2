inherit ROOM;
#include <ansi.h>

void create()
{
	set("short",BBLU+YEL"��а��"NOR);
	set("long",@LONG
���ͷ����, ��Ư�������粨�˰߲�����ϸɳ, ����һ��ֱ��, 
�����ƺ�����ͨ��������ɳ�ѵ�ש������; ������ǰ, ����������
���������һ��ľ��, ����֮��, ʲôҲû��... 
LONG);
	set("exits",([
"jump":__DIR__"e02",
"north":__DIR__"room",
"south":__DIR__"room",
"east":__DIR__"room",
"west":__DIR__"room",
]));
	set("no_transmit",1);
	setup();
}