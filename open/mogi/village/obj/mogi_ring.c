// ph_hat.c
#include <armor.h>

inherit EQUIP;

void create()
{
set_name("ħ�����",({"mogi ring","ring"}));
     set("long","����ħ�����Ľ�ָ,����������.\n");
	set_weight(700);
        set("armor_type","finger");
	set("light_up",-1);  
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value",2000);
		set("material","gold");
	set("armor_prop/armor",5);
	set("light",-1);
        }
        setup();
}
