//虹晶狂牙手套---2000.4.6 by dhk
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(YEL"虹晶狂牙手套"NOR,({"diamond hands","hands"}));
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的黄光，是万年的宝物。\n");
        set("unit","双");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
set("value",50000);
        set("material","diamond");
        set("armor_type","hands");
        set("armor_prop/armor", 25);
        set("armor_prop/attack",15);
        set("armor_prop/parry",10);
set("wear_msg", HIR"$N穿上$n"HIR"，周围的黄光渐渐凝聚成了一股狮形利牙的气罩，缓缓的把$N的双手包了起来。\n"NOR);
set("unequip_msg", HIR"$N将$n"HIR"脱了下来，气罩又化成黄光缓缓的消逝在双手上。\n");
        }
        setup();
}

