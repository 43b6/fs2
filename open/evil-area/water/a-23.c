inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"HIG" ͬ �� �� "NOR);
	set("long",@LONG
������ʯ�Ƶ����ϣ��ŵ��²��ź�ʵ��ʯ��ȴ�����лζ��ĸо�
�������룬�Ѳ����ſ�Ҫ���˲��ɣ������룬�㿪ʼ�ӽ��Ų���ȥ��
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west":__DIR__"a-01",
"east":__DIR__"a-24",
]));
	setup();
}

 