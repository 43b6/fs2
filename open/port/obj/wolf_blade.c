// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;
				
void create()
{
	set_name("狼牙军刀",({"wolf blade","blade"}));
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long","上等精钢炼制而成 , 一直是守卫队副队头最得力的助手 .\n");
	set("value",3000);
		set("material", "steel");
		set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
		 set("unwield_msg", "$N将手中的$n收了起来 .\n");
	}
	init_blade(40);
	setup();
}
