inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��������������ţ������ƺ���������������Σ�յ�а���֮
�£�һ�����Ŷ��˵������������޵Ļ��������ˮ�����Լ������ľ�
ɫ���㲻�����ɣ��������������������ؿֻŵ���а��ʹ֮һ��ˮ
а��--ˮ���������ס�ĵط���
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("objects",([
__DIR__"npc/mob01":2,
__DIR__"npc/mob02":1,
]));
	set("exits",([
"south":__DIR__"a-01",
"north":__DIR__"a-03",
]));
	setup();
}

 