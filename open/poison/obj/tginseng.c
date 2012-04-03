
#include <ansi.h>
inherit COMBINED_ITEM;

void create()
{
	set_name("千年人篸",({"thousand ginseng","ginseng"}) );
	set("base_weight", 50);
	set("unit","根");
	set("base_unit","根");
	set("value",10000);
	set_amount(1);
	set("long","
千年人篸是人篸中的极品，在深山中埋藏千年吸收了千年的灵气，因此在疗效
上较普通人篸更好 , 相对的，其价格更是高的吓人。\n");
	setup();
}
void init()
{
	if ( this_player()==environment() )
	add_action("do_eat","eat");
}
int do_eat(string str)
{
	object me=this_player();
	int num=100+random(10);
	if ( !str || str!="ginseng") {return 0;}
	message_vision("$N将千年人篸服下，觉得精神似乎全恢复了。\n",me);
	this_player()->receive_heal("gin",num);
	add_amount(-1);
	return 1;
}

