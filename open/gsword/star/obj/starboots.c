#include <ansi.h>
inherit EQUIP;

void create()
{
    set_name( "����֮Ь" ,({"starboots","starboots"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("value", 10000);
                set("material", "cloth");
                set("armor_type", "boots");
		set("armor_prop/armor", 5);
                set("armor_prop/dodge", 5);

        }
}
