inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIC"冰之纹章"NOR,({"ice-emblem"}));
	set("long","一枚看来带点冰冷温度和奇异蓝光的奇怪纹章，任你如何的细看和研\n"
		  +"究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
