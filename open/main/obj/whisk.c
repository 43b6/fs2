// sword.c : an example weapon

#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("拂尘",({"whisk"}) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("long","像征着道士商标的拂尘。\n");
		set("material","wood");
	set("wield_msg","$N从背后拔出$n握在手中。\n");
		set("unwield_msg","$N将手中的$n挂回背后。\n");
	}
	init_whip(25);
	set("no_drop",1);
	setup();
}
int query_autoload()
{
	return 1;
}

int wield()
{
	if(this_player()->query("class") != "taoist")
	return notify_fail("你不是道士\n");
	else 
	return ::wield();
}
