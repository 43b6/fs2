// golden_sword.c

#include <weapon.h>

	inherit STABBER;

void create()
{
	set_name("��Ԫɡ", ({ "king umbrella" }) );
	set_weight(20000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set ("material", "gold");
	}
	init_stabber(60);
	setup();
}
