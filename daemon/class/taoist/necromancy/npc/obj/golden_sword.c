// golden_sword.c

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("��潣", ({ "golden sword" }) );
	set_weight(20000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set ("material", "gold");
	}
	init_sword(40);
	setup();
}
