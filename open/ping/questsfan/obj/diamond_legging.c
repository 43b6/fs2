//虹晶疾风护膝---2000.4.6 by dhk
inherit EQUIP;
#include <ansi.h>
void create()
{
        set_name(HIB"虹晶疾风护膝"NOR,({"diamond legging","legging"}));
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","一件由北胜天使用＂虹晶″特异矿石铸成，表面散发着特异的蓝光，是万年的宝物。\n");
        set("unit","双");
        set("value",20000);
            set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("material","diamond");
        set("armor_type","leggings");
            set("armor_prop/armor",5);
        set("armor_prop/attack",10);
        set("armor_prop/parry",8);
        set("armor_prop/unarmed",5);
set("wear_msg", HIR"$N穿上$n"HIR"，周围的蓝光渐渐漩起了一阵强风，慢慢的把$N的双腿包了起来。\n"NOR);
set("unequip_msg", HIR"$N将$n"HIR"脱了下来，强风又化成蓝光缓缓的消逝在四周。\n");
        }
        setup();
}

