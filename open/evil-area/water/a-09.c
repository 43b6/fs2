inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��紵���������ź�������һ��ʱ�䣬���Ծ���ͣ���˽Ų�����
����һ�Գ����Ŵ���ɫ����ݵ��ϣ�����һЩ����а�ް����������
һ��������˵�������ĸж���������ո�������ɱ¾�˲���а�ޣ�
�㲻���²��������Ƿ�Ҳ�����������������أ����Ĳ�����һ��
���С�
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":1,
__DIR__"npc/mob02":1,
__DIR__"npc/mob03":1,
]));
	set("exits",([
"south":__DIR__"a-10",
"north":__DIR__"a-08",
]));
	setup();
}

 