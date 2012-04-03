// fusword.c
#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name(HIB"狂风战爪"NOR,({"wind claws","claws"}));
set_weight(6000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
set("long","这是一只由传说中的‘风岩石’所打造而成的武器。\n");

set("value",15000);
                set("material", "steel");
set("wield_msg","$N戴上$n后身体涌出了风的力量\n");
set("unwield_msg","$N将$n取下，风的力量随之消逝。\n");
        }
init_unarmed(40);
        setup();
}
