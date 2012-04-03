// golden_armor.c

#include <armor.h>

inherit EQUIP;

void create()
{
	set_name("ħ��ս��", ({ "ghost armor"}) );
	set_weight(50000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("material", "blacksteel");
		set("armor_prop/armor", 50);
		set("armor_prop/dodge", -10);
		set("armor_type", "cloth");
		set("no_get", 1);
	}
	setup();
}
