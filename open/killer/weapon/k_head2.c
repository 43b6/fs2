#include <ansi.h>
inherit EQUIP;

void create()
{
set_name("忍者面罩",({"nija feather","feather"}) );
set_weight(1000);
if (clonep() )
set_default_object(__FILE__);
else{
set("long","
以天蚕丝织成的头巾，似有特殊力量附着于上。\n");

set("armor_type","head");
set("material","blacksteel");
set("unit","件");
set("armor_prop/armor",5);
set("value",450);
set("armor_prop/throwing",5);
setup();
}
}