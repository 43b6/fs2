#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
        seteuid(getuid());
        set_name(HIR "五极寒梅剑" NOR,({"five sword","sword"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
        set("long","一把美丽的剑 ,剑柄上有着梅花的花纹 .\n");
                set("value",6000);
                set("material", "steel");
                set("ski_type","sword");
        set("wield_msg", "$N「唰”地一声抽出一把$n握在手中。\n");
        set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");
        }
        init_sword(80);
        setup();
}

