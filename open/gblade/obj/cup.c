// waterskin.c
#include <ansi.h>
inherit ITEM;

void create()
{
	set_name(HIC"ʮ�����ű�" NOR, ({"ten-cup","cup"}));
	set_weight(50);
	set("unit", "��");
	set("value", 2000);
	setup();
}