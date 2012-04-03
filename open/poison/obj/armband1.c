inherit EQUIP;
#include <ansi.h>

void create()
{
        set_name(HIY"神龙金环 "NOR,({"dragon gold armband","armband"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","相传此环乃由神龙的鳞片烧铸而成 ,拥有很好的防御率 .");
        set("unit","个");
        set("value",2750);
        set("material","steel");
        set("armor_type","armbands");
        set("wear_msg","$N戴上$n，身上顿时被一片龙气笼罩！\n");
        set("unequip_msg","$N脱下$n之后，$N的龙气逐渐消失。\n");
        set("armor_prop/armor", 9);
        set("armor_prop/force", 10);
        set("armor_prop/parry", 10);
        }
        setup();
}
