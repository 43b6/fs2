inherit ROOM;
#include <ansi.h>

void create ()
{
	set("short",HIC"�� �� ��"NOR);
	set("long",@LONG
��һ������෷����С�Ե�а�ޣ������²�����Ǯȥ������ֻ��
������������ĹƳ桢���⣬��ɫһ�壬�Ͻ����߻ز���...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"south":__DIR__"a-12",
"north":__DIR__"a-10",
]));
	setup();
}

 