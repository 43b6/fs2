inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIR"火之焰羽"NOR,({"fire-feather"}));
	set("long","一根带着微弱火光的羽毛，隐约的透出几点光茫，名为火之焰羽，任\n"
		  +"你如何的细看和研究，却也不知它有何作用，也许和传说中的天灵地\n"
		  +"界有关。\n");
	set("unit","根");
	set("value",100000);
	set("specialitem",1);
	set("no_sac",1);
	set_weight(1000);
        setup();
}
