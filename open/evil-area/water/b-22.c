inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIG"�� �� �� -- �� Ժ"NOR);
	set("long",@LONG
������ǰ����һ��ľ�Ƶ���ǣ������ֻ����һƥ���ɫ�Ŀ���
��ȫ���Ž��ɫ�Ĺ�â��ʮ�ֵľ������񣬷·��콫���һ�����
�����㲻�����⶯���ֺ���
LONG);
	set("no_fight",1);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"north":__DIR__"b-27",
"south":__DIR__"b-25",
"west":__DIR__"b-21",
]));
	set("objects",([
__DIR__"npc/horse":1,
]));
	setup();
}

 