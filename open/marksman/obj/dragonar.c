//报酬 armor
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
          set_name(HIR"龙凤护臂"NOR,({"dragon armbands","armbands"}));
set_weight(5000);
        set("no_sell",1);
        set("no_auc",1);
set("no_get",1);
set("no_give",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","传说由龙皮和凤皮做成的护臂
\n");
        set("unit", "套");
        set("value",200000);
set("armor_type","armbands");
        set("material","crimsonsteel");
        set("armor_prop/armor",20);
        set("armor_prop/unarmed",7);
        set("armor_prop/parry",7);
set("wear_msg", HIY"$N穿上$n，出现了一对龙凤向$N四周护住双臂\n"NOR);
set("remove_msg", HIY"$N将$n卸了下来，龙凤也慢慢消失了。\n"NOR);
        }
        setup();
}
int query_autoload()
{
 return 1;
}
