#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
        seteuid(getuid());
        set_name("鬼头刀",({"ghost-head blade","blade"}));
        set_weight(15000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long","这是一种江湖豪客常用的刀 ,看起来颇为沉重 .\n");
                set("value",10000);
                set("material", "gold");
                set("wield_msg", "拿着$n,$N觉得浑身充满了杀气.\n");
                set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");
        }
        init_blade(40);

        setup();
}

