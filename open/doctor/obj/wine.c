// waterskin.c
#include <ansi.h>
inherit ITEM;
#include "/feature/liquid.c"

void create()
{
	set_name( HIR"<��>"HIC"ʮ�����ű�" NOR, ({"full-wine","wine"}));
	set_weight(50);
	set("unit", "��");
	set("value", 2000);
	set("����", 3);
	set("Һ��", ([
		"����": "��",
		"����": "��������",
		"ʣ": 3,
		"drunk_apply": 6,
	]) );
	setup();
}