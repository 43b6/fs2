#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
        set_name("[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[1;31m□[1;33m□[0m",({"gold legging","legging"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
   set("long",HIW"这是一件由传说中玄天玉加上金镂线所编成的护膝。\n"NOR);
   set("wear_msg", "$N将$n穿上，"HIY"金镂战膝"NOR"的神奇力量使$N感觉即将飞翔。\n");
   set("unequip_msg", "$N将$n脱掉，"HIY"金镂战膝"NOR"的神奇力量从$N上逝去。\n");
        set("unit","件");
        set("value",70000);
        set("material","cloth");
        set("armor_type","leggings");
        set("armor_prop/armor",20);
        set("armor_prop/move",3);
        }
        setup();
}
