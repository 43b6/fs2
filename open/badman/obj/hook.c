// hook.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�ֹ�", ({ "hook" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "ֻ");
		set("material", "steel");
	}
	init_blade(50);
	setup();
}
