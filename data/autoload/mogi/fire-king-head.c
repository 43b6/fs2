#include <ansi.h>
inherit ITEM;
void create()
{
        set_name(HIR"焚天魔王的人头"NOR, ({ "fire-king-head" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("unit", "个");
		set("long","魔界之王‘焚天魔王’的人头.\n");
		set("value", 0);
		set("no_sell",1);
		set("no_put",1);
		set("no_auc",1);
		set("no_sac",1);
		set("no_drop",1);
		set("magic-manor",5);
        }
}
