// ph_hat.c
#include <armor.h>
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name( HIY "��������" NOR,({"tiger surcoat","surcoat"}));
	set_weight(1000);
        set("no_drop",1);
	set("armor_type","cape");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("value",30000);
		set("material","leather");
		set("armor_prop/armor",100);
               set("armor_prop/dodge", 10);
                set("armor_prop/move", 10);
        }
        setup();
}
