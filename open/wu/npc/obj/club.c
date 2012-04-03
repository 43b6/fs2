#include <weapon.h>

inherit STAFF;

void create()
{
        set_name( "冰火风雷棍" , ({ "club"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "根");
                set("long", "这是一根看起来普普通通的棍子。\n");
                set("value", 300);
                set("material", "wood");
        }
        init_staff(20);

        set("wield_msg", "只见到$N右手一晃，手上顿时出现一把$n。\n");
        set("unwield_msg", "$N吐了一口气，将$n绑在背上。\n");

        setup();
}

