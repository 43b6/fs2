
#include <ansi.h>

inherit EQUIP;
void create()
{
	set_name("�w��",({"rain coat","coat"}) );
	set_weight(2500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ��ũ�򳣴��ĺw�¡�\n");
		set("material","plant");
		set("unit","��");
		set("value",30);
		set("armor_type","cape");
		set("armor_prop/armor",3);
		setup();
	}
}

