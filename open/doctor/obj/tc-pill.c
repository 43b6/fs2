#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(HIY"药丸"NOR, ({"tiger_cornu-pill"}));
    set("long","一颗由独角虎的角与百年榕树根合制而成的药丸...\n");
    set_weight(5);
    set("unit","颗");
    setup();
}
