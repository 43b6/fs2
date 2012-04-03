// manque_shield.c		designed by dos 95'12

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("失意盾", ({ "manque shield", "shield"}));
	set_weight(2500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "个");
		set("long", "这是失意剑客的盾, 盾面已经磨糊不清了, 
但是看起来还是十分监固的样子. \n");
		set("value", 2000);
		set("material", "gold");
		set("armor_prop/armor", 15);
		set("armor_prop/dodge", -5);
	}
//  	init_sword(40);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wear_msg", "$N把$n拿了出来, 放在胸前. \n");
	set("remove_msg", "$N把$n收了起来. \n");

// The setup() is required.

	setup();
}
