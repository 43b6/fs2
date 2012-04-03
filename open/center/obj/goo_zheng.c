// torch
#include <weapon.h>

inherit STABBER;

void create()
{
        set_name("古筝", ({ "goo-zheng", "goo", "zheng" }) );
        set_weight(300);
        if( clonep() )
          set_default_object(__FILE__);
        else {
          set("unit", "只");
          set("long", "一只乌黑的古筝, 可见其价值匪浅, 不过也只有懂音律的人才识货。\n");
          set("value", 30);
          set("material", "桧木");
          set("wield_msg", "$N笨拙的拿起$n。\n");
          set("unwield_msg", "$N胖的一声放下手中的$n。\n");
        }
        init_stabber(10);
        setup();
}
