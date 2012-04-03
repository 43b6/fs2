// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("木剑", ({ "wood sword","sword" }) );
        set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
                set("long", "这是一把练习用的木剑,还用布包着剑尖以防伤人.\n");
                set("value", 50);
	set("material","wood");
	}
        init_sword(4);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
        set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");

// The setup() is required.

	setup();
}
