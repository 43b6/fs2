inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
������Ʈ�˱ǣ����̲�ס�ķ�����̾����ʵ�ں�������һ��а
�齫��ݱ̿����󣬾�Ȼ����а��������������һ���ط������ﻨ
�㣬���ﰲ������ֱ������һ��а��ʹ��������һ�����飬�Ѳ��ɣ�
������ʲô������ʹ������
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-17",
"east":__DIR__"a-15",
]));
	setup();
}

 