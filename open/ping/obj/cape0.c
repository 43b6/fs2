// make by Onion
#include <armor.h>
inherit CAPE;

void create()
{
	set_name("�Ƽ�", ({ "cloud cape", "cape" }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "���ɫ���Ƽ�����, ������ϼ���ɫ�ʰ�쵡�\n");
		set("unit", "��");
		set("value", 900);
		set("material", "cloth");
		set("armor_prop/armor", 3);
	}
	setup();
}

