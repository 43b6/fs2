#include <armor.h>
#include <ansi.h>
inherit HEAD;

void create()
{
        set_name(HIR"凤"HIM"凰"HIB"头"HIW"冠"NOR, ({"phoenix cap", "cap"}));
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else
	{
		set("long",HIW"传说中，由不死鸟－凤凰的头骨所作成的，不但能助长气力，更能增强防御。\n"NOR);
		set("wear_msg", HIW"$N将$n"HIW"带上，突然仿佛不死的凤凰，内力与防御似乎都增进了许多。\n"NOR);
		set("unequip_msg", HIY"$N将$n"HIY"拿下，$N身后一股凤凰之气随之淡化..\n"NOR);
		set("armor_prop/armor",5);
		set("armor_prop/force",5);
		set("unit", "顶");
		set("value", 100000);
		set("material", "steel");
        }
        setup();
}
