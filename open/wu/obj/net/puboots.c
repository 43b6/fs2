inherit EQUIP;
#include <ansi.h>
#include <armor.h>
void create()
{
set_name("[1;33m□[1;37m□[1;33m□[1;37m□[1;33m□[1;37mR[1;33m□[1;37mc[0m" , ({"purple boots","boots"}));
         set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("unit", "双");
        set("value",110000);
        set("material","cloth");
        set("armor_type", "boots");
          set("armor_prop/armor",6);
   set("long","这是一件由天上诸神采集先天灵气所炼造而成的舞靴。\n");
   set("unequip_msg", "$N将$n脱掉,$N身上的$n所散发的灵气随之逝去。\n");
   set("wear_msg", "$N将$n穿上，$N身上的$n散发的灵气将$N包围。\n");
   set("armor_prop/dodge",2);
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
