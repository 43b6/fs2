inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
����������߶��Ų������ι�״���������ͷ�ϳ����Ǿ�����
�϶��˼������룬����ÿһ�������ƺ����Ѿ�ϰ��������������
��һ���������Ҳ������ϰ�������ָо�...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":1,
__DIR__"npc/mob02":1,
]));
	set("exits",([
"west":__DIR__"enter",
"east":__DIR__"a-23",
"south":__DIR__"a-22",
"north":__DIR__"a-02",
]));
	setup();
}

 