#include <ansi.h>
#include <armor.h>
inherit HANDS;
void create()
{
        set_name("狂龙手套",({"dragon_hands","hands"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "双");
        set("value",5000);
        set("long","乃利用狂龙之皮制成, 有相当的防御力。\n");
        set("material","cloth");
// Swy QC 98/3/16
        set("armor_prop/armor", 4);
        set("armor_prop/dodge",3);
        set("armor_prop/parry",2);
        set("armor_prop/move",1);
        }
        setup();
}

