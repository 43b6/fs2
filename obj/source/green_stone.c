// rose_flower.c
#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIG "����ʯ" NOR,({"green stone","stone"}));
	set("unit","��");
	set_weight(1000);
	setup();
}
