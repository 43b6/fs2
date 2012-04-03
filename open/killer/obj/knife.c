// sword.c : an example weapon

#include <weapon.h>
#include <ansi.h>

inherit THROWING;

void create()
{
	set_name("�ɵ�",({"knife"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("base_unit","��");
		set("base_value",100);
		set("material", "steel");
	}
	init_throwing(20);
	set_amount(1);
	setup();
}
