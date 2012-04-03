#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        set_name(HIC"百战宝刀"NOR,({"hundred-fight blade","blade"}) );
        set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long","一把特制的刀子 ,刀身发着奇异的蓝芒 ,为项少龙的爱刀 .\n");
                set("value", 10000);
                set("material","steel");
                set("weapon_prop/blade", 6);
        }
        init_blade(80);

        set("wield_msg","$N将百战宝刀由刀鞘抽出 ,顿时蓝芒大盛 ,炫丽夺目 .\n");
        set("unwield_msg","$N将百战宝刀收回刀鞘里 ,奇异的蓝芒慢慢的暗了下来 .\n");

        setup();
}
