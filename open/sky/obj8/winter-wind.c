inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIG"冬极风"NOR,({"winter-wind"}));
	set("long","带着点风的质感，握在手中可以隐隐感觉到一阵暖风流过心中，任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵\n"
		  +"地界有关。\n");
	set("unit","块");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
