#include <weapon.h>
#include <ansi.h>

inherit UNARMED;

void create()
{
        seteuid(getuid());
set_name( "魔回爪" ,({"daemon claw","claw"}));
set_weight(6000);

        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
              set("wield_msg", "戴着$n,妖力充满了$N全身.\n");
  set("unwield_msg", "$N将手中$n的血迹擦拭干净后 ,小心的收入护套中。\n");

set("value",10000);
                set("material", "steel");
        }
init_unarmed(40);
        setup();
}
