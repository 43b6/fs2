// make by Onion
#include <armor.h>
inherit CLOTH;

void create()
{
	set_name("տ��ɫ����", ({ "blue long-robe", "blue","robe" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "տ�������ɫ, ʹ�����������ƺ�����͸���ĸо���\n");
		set("unit", "��");
		set("value", 2000);
		set("material", "cloth");
		set("armor_prop/armor", 6);
	}
	setup();
}

