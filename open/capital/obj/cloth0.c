// make by Onion
#include <armor.h>
inherit EQUIP;

void create()
{
	set_name("����˿����", ({ "short robe", "robe" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "����·����ú���, �������ǳ��ĺ���\n");
		set("unit", "��");
		set("value", 1000);
		set("material", "cloth");
		set("armor_type","cloth");
		set("armor_prop/armor", 7);
	}
	setup();
}

