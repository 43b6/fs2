inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
������������ĺ����ϣ�Ư����һ��������㲻�ϵĹۿ��Ž�
���ﱾ����ϧ���������ڽ����ﱳ�治Զ���ϱ߰��ϣ����Ը���
�޷����ĵ��ڲ��ǳ�����Σ��ϱߴ�������ͯ������������������
��˼��...
LONG);
	set("objects",([
__DIR__"npc/mob02":3,
]));
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-18",
"east":__DIR__"a-16",
"south":__DIR__"a-30",
]));
	setup();
}

 