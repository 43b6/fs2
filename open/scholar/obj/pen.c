//whip.c

#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	object me=this_player();
	set_name("����", ({"gold pen", "gold", "pen"}));
        set_weight(1000);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "֧");
	  set("long","������������������֮�ʣ����м���������ӵ�С�\n");
	  set("value", 8500);
	  set("material", "ironsteel");
	 }
     init_stabber(60);
	me->set("chat_chance_combat",10);
	setup();
}

