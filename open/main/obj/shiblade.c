#include <weapon.h>
#include <ansi.h>
inherit BLADE;
void create()
{
	seteuid(getuid());
        set_name(HIM"邪刀"NOR,({"shi-blade","blade"}));
        set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("value",20000);
                set("weapon_prop/dodge", 5);
                set("weapon_prop/parry", 5);
		set("material", "steel");
                set("wield_msg","$N拔出了$n脸上散发出了更重的邪气。\n");
                set("unwield_msg","$N还刀入鞘，脸上邪气渐弱。\n");
	}
        init_blade(90);
         set("ski_type1","blade");
         set("ski_type2","dragon-blade");
         set("ski_level1", 90);
         set("ski_level2", 90);
         setup();
}
