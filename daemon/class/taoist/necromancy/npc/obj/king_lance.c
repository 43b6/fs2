// golden_sword.c

#include <weapon.h>

  inherit LANCE;

void create()
{
	set_name("����ǹ", ({ "king lance" }) );
	set_weight(20000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set ("material", "gold");
	}
	init_lance(40);
	setup();
}
