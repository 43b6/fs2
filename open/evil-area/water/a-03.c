inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
���ʵ��¶ȣ�����ů�紵����������ӣ����̲�ס�Ĵ����˹�Ƿ
�������ĺ��ߣ�����Կ�����ֻħ�������������Լ���֫�壬�·���
˳��èһ�㣬ֻ�Ǹо���������µģ���б��͵͵ע����������Ҳ��
�������㣬�����ڱ˴˵����У��Է�����һ����ֵ������...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":1,
]));
	set("exits",([
"south":__DIR__"a-02",
"north":__DIR__"a-04",
]));
	setup();
}

 