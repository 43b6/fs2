// golden_sword.c

#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("��������", ({ "ghost whip" }) );
	set_weight(20000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set ("material", "blacksteel");
	}
	init_whip(40);
	setup();
}
