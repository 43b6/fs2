// by onion
#include <armor.h>

inherit EQUIP;

void create()
{
	set_name("�׳�����", ({ "white gloves", "gloves" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
	  set("long", "�Ϻð׳����ѩ��˿�Ƴɵ�����, �ɵֵ�һ������Ĺ�����\n");
	  set("unit", "˫");
	  set("value", 2000);
	  set("material", "linen");
	  set("armor_type","hands");
	  set("armor_prop/armor", 5);
	}
	setup();
}

