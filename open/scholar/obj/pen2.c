//whip.c

#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	object me=this_player();
	set_name("������", ({"silver pen", "silver", "pen"}));
        set_weight(1500);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "֧");
	  set("long","������������������֮�ʣ���������������ӵ�С�\n");
	  set("value", 4500);
	  set("material", "steel");
	 }
     init_stabber(50);
	me->set("chat_chance_combat",10);
	setup();
}

