#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name(HIR "火云龙锁" NOR,({"red_dragon_chain","chain"}));
        set_weight(6500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
                set("value",30000);
                set("material","crimsonsteel");
                set("rigidity",70);
                set("long","一条"HIR"火红"NOR"的锁链,是由"HIY"陆清风"NOR"打败上古生物火龙,扒其筋骨制作而成的。\n");
        set("wield_msg", "$N将$n挽在手上,一股"MAG"龙气"NOR"便由你的手臂直传而上。\n");
        set("unwield_msg","$N手上的"MAG"龙气"NOR"迅速传回"HIR"锁链"NOR"中。\n");
        }
        init_whip(90);
        setup();
}
