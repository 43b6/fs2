#include <armor.h>
inherit EQUIP;

void create()
{
	set_name("����", ({ "chainmail","mail" }) );
	set_weight(100000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ�����Ƶ�����.\n");
		set("unit", "��");
		set("value", 600);
                set("armor_type","cloth");
 		set("material", "steal");
		set("armor_prop/armor", 8);
	}
	setup();
}

