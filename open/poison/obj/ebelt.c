#include <ansi.h>
inherit EQUIP;


void create()
{
	set_name("��˿����", ({"silk belt", "belt"}) );
	set_weight(200);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long", "һ����֩��˿֯�ɵ�����,�൱����.\n");
		set("material", "cloth");
		set("unit", "��");
		set("value", 100);
		set("armor_type", "waist");
		set("armor_prop/armor", 3);
                setup();
	}
}  
