//焚天魔王 cloak
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIB"邪"HIW"神"HIB"披"HIW"风"NOR,({"daemon cloak","cloak"}) );
	set_weight(600);
        set("no_sell",1);
        set("no_auc",1);
        set("no_steal",1);
set("no_drop",1);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
焚天魔王的专属披风，由不知名的坚韧丝绸制成。
\n");
        set("unit", "件");
        set("value",50000);
        set("armor_type","cape");
        set("material","leather");
	set("armor_prop/armor",7);
	set("armor_prop/unarmed",3);
        set("armor_prop/parry",3);
		set("need_exp",2000000);
         }
        setup();
}
int query_autoload()
{
 return 1;
}
