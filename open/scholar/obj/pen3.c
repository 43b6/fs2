//whip.c

#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	object me=this_player();
	set_name("��ͭ��", ({"Cu pen", "Cu", "pen"}));
        set_weight(2000);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "֧");
	  set("long","������������������֮�ʣ����½���������ӵ�С�\n");
	  set("value", 2500);
	  set("material", "iron");
	 }
     init_stabber(40);
	me->set("chat_chance_combat",10);
	setup();
}

