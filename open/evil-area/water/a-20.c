inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��������������һ����������Ư����ˮ���ϣ�������������ߣ�
����߱���������ϵĽ����һ��С�����ײ�����������ڵ��ϵ�
а�ޡ������㲻�ϵĵ�Ǹ��а���ƺ���ȫ����������˵ʲô�����Ե�
�������У�������־�������Ҳֻ��Ц��Ц�����������š�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":1,
__DIR__"npc/mob02":1,
__DIR__"npc/mob03":1,
]));
	set("exits",([
"north":__DIR__"a-21",
"south":__DIR__"a-19",
]));
	setup();
}

 