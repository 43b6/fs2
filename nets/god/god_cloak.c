//焚天魔王 cloak
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
    set_name(""HIC"□HIW"□HIC"□HIW"□HIC"□HIW"□HIC"□HIW"□NOR"",({"god cloak","cloak"}));
	set_weight(600);
        set("no_sell",1);
        set("no_auc",1);
set("no_drop",1);
   set("no_give",1);
   set("no_put",1);
   set("no_get",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
蕴涵风神的祝福，使在战斗中时的移动会有点迅速。
\n");
        set("unit", "件");
        set("armor_type","cape");
        set("material","leather");
	set("armor_prop/armor",7);
	set("armor_prop/dodge",7);
        set("armor_prop/move",7);
set("wear_msg", HIW"$N披上$n"HIW"，$N感受到身体四周有着风围绕着\n"NOR);
set("remove_msg",HIW"$N将$n"HIW"卸了下来，四周的微风转眼静止了下来。\n"NOR);

         }
        setup();
}
