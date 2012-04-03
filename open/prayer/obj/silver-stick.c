#include <weapon.h>

inherit STICK;

void create()
{
        set_name( "银双节棍" , ({ "silver club","club"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "根");
                set("long", "一根银制的双节棍。\n");
                set("value", 4000);
                set("material", "silver");
        }
        init_stick(10);

        set("wield_msg", "只见到$N缓缓地将$n从布包中拿出，威风凛凛。\n");
        set("unwield_msg", "$N帅气地将$n放回布包内。\n");

        setup();
}                   