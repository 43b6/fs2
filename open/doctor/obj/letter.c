#include <ansi.h>
inherit ITEM;

void create()
{
    set_name(HIW"跛脚老头的信"NOR, ({"oldman letter","letter"}));
    set("long","一封跛脚老头给华陀的信...\n");
    set_weight(10);
    set("unit","封");
    setup();
}
