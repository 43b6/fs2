//whip.c

#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	object me=this_player();
	set_name("镶金笔", ({"gold pen", "gold", "pen"}));
        set_weight(1000);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "支");
	  set("long","这是儒门书生们所用之笔，凡中级儒生都会拥有。\n");
	  set("value", 8500);
	  set("material", "ironsteel");
	 }
     init_stabber(60);
	me->set("chat_chance_combat",10);
	setup();
}

