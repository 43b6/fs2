//whip.c

#include <weapon.h>

inherit STABBER;

int special_att();

void create()
{
	object me=this_player();
	set_name("[1;32m�����[0m", ({"literate pen", "pen", "literate"}));
        set_weight(500);
	if( clonep() )
	 set_default_object(__FILE__);
	else 
	 {
	  set("unit", "֧");
	  set("long","��������ר�õĵ���ʣ����������֮ʿ���С�\n");
	  set("value", 1000);
	  set("material", "blacksteel");
	 }
	init_stabber(80);
	me->set("chat_chance_combat",10);
	setup();
}

