#include <ansi.h>
inherit EQUIP;

void create()
{ 
	set_name("ľ��", ({"wood sandals", "sandals"} ));
	set_weight(2000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "˫");
		set("material", "wood");
		set("armor_prop/armor", 3);
		set("value",150);
		set("long","
һ˫�������ص�ľ����Ь�����ǳ��Զ��󹤽�֮�֣�����ԭ����֮�\n");
		set("armor_type","boots");
		}
		setup();
}
