// Qc by anmy (98/3/3)
#include <ansi.h>
#include <armor.h>
inherit WRISTS;
object me=this_player();
void create()
{
     set_name(HIB"魔龙骨炼"NOR , ({"mdragon bracelet","bracelet"}) );
     set_weight(2000);
     if ( clonep() )
              set_default_object(__FILE__);
     else {
            set("unit", "串");
            set("value", 0);
            set("material", "steel");
            set("long","为魔龙甲骨所制成。\n");
        set("no_auc",1);
        set("no_give",1);
        set("no_sell",1);
        set("no_put",1);
        set("no_drop",1);
        set("no_get",1);
            set("wear_msg", "$N把$n带在手上，阴森之气遍布全身。\n");
     }
            setup();
if(me->query("class")=="blademan")  this_object()->set("armor_prop/blade", 5);
if(me->query("class")=="fighter")   this_object()->set("armor_prop/unarmed",5);
if(me->query("class")=="swordsman") this_object()->set("armor_prop/sword",5);
if(me->query("class")=="scholar")   this_object()->set("armor_prop/stabber",5);
if(me->query("class")=="bandit")    this_object()->set("armor_prop/unarmed",5);
            this_object()->set("armor_prop/dodge",4);
            this_object()->set("armor_prop/force",4);
            this_object()->set("armor_prop/parry",4);
            this_object()->set("armor_prop/armor",9);
}
