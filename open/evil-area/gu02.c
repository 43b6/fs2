inherit ROOM;
#include <ansi.h>

void create()
{
	set("short","��ƶ�");
	set("long",@LONG
�������������ĹƳ档
LONG);
	set("evil_area",1);
	set_temp("can_hatch",1);
	set("exits",([
"west":__DIR__"gu01",
]));
	setup();
}