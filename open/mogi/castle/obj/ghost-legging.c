// ��ָ��ħeq exp 160��

#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name(HIW"���м�"NOR,({"ghost legging","legging"}));
	set_weight(3000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","һ����������������ּס�\n");
        set("unit","��");
	set("value",50000);
	set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor",5);
	set("armor_prop/move",3);
        set("armor_prop/dodge",5);
	}
        setup();
}
