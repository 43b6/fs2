inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIB"水之纹章"NOR,({"water-emblem"}));
	set("long","一枚看来泛着点水气和奇异蓝色光茫的奇怪纹章，任你如何的细看和\n"
		  +"研究，却也不知它有何作用，也许和传说中的天灵地界有关。\n");
	set("unit","枚");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
