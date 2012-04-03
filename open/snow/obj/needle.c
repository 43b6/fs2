// sword.c : an example weapon

#include <weapon.h>
#include <ansi.h>

inherit THROWING;

void create()
{
	set_name("����",({"needle"}));
	set_weight(1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","֧");
		set("base_unit","֧");
		set("base_value",1);
		set("material", "steel");
	}
	init_throwing(10);
	set_amount(1);
	setup();
}
