#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("���߶���", ({"samurai cloak","cloak"}) );
	set_weight(5000);
	if ( clonep())
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("material","leather");
		set("value", 400);
		set("armor_type","cape");
		set("armor_prop/armor", 5);
		set("long","һϮ���������Ķ��\n");

	}
	setup();

}
