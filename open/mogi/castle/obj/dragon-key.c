
inherit ITEM;
#include <ansi.h>
void create()
{
        set_name(HIC"青龙之钥"NOR, ({ "dragonkey","key" }) );
        set("long", "一把神秘的钥匙。\n");
        set("unit", "把");
        set_weight(800);
        set("no_drop",1);
        set("value", 0);
}
