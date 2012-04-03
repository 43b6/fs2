// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIR"烈焰神爪"NOR,({"fire claw","claw"}));
set_weight(4000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这是一把用‘烈岩’所制作的武器。\n");

                set("value",10000);
                set("material", "steel");
set("wield_msg","$N将$n戴上，身上涌出雄雄的烈焰。\n");
set("unwield_msg","$N将$n卸了下来，烈焰随之逝去。\n");
set("armor_prop/unarmed",5);
        }
        init_unarmed(50);
        setup();
}
