//king cloth
#include <armor.h>
#include <ansi.h>
inherit EQUIP;


void create()
{
        set_name(HIY"龙袍"NOR,({"king cloth","cloth"}) );
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
由金丝织成的皇室天子专用袍，上面绣着一只五爪金龙。
\n");
        set("unit", "套");
        set("value",200000);
        set("armor_type","cloth");
        set("material","crimsonsteel");
        set("armor_prop/armor",22);
        set("armor_prop/unarmed",7);
        set("armor_prop/parry",7);
        }
        setup();
}
