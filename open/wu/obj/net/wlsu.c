#include <ansi.h>
#include <armor.h>
inherit EQUIP;
void create()
{
set_name("[1;37m□[0;37mg[1;37m□[0;37m□[1;37m□[0;37m□[1;37m□[0;37m□[0m" , ({"wind cloak","cloak"}));
   set_weight(10000);
   set("armor_type","cape");
   if( clonep() )
           set_default_object(__FILE__);
   else {
   set("unit", "件");
   set("material","leather");
   set("value",100000);
   set("long","这是一件由天上诸神使用风岩石所打造的披风。\n");
   set("wear_msg", "$N将$n披上，"HIW"狂风战披"NOR"的发出的光芒注入$N身中。\n");
   set("unequip_msg", "$N将$n脱掉，"HIW"狂风战披"NOR"的光芒力量随之逝去。\n");
   set("armor_prop/armor",6);
   set("armor_prop/stabber",3);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
