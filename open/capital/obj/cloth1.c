// make by Onion
#include <armor.h>
inherit EQUIP;

void create()
{
	set_name("ҹ����", ({ "night cloth", "cloth" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "ҹ���ж����ʺϵ��·�, �����ҹ��Ϊһ�塣\n");
		set("unit", "��");
		set("value", 1000);
		set("material", "cloth");
		set("armor_type","cloth");
		set("armor_prop/armor", 5);
	}
	setup();
}

