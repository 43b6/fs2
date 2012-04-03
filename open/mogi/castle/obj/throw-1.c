// sword.c : an example weapon

#include <weapon.h>
#include <ansi.h>

inherit THROWING;

void create()
{
	set_name("������Ҷ",({"three-son-moon","throw"}));
        set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("base_unit","��");
		set("no_give",1);
		set("no_drop",1);
		set("base_value",1000);
		set("value",10000);
		set("material", "steel");
	}
	init_throwing(60);
	set_amount(1);
	setup();
}
