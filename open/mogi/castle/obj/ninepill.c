// made by roger
//非卖品,携带之mob exp 170万
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIY"九转熊蛇丸"NOR, ({"snake pill","pill"}) );
	set("long",
	"逍遥派圣药,具有神奇无比的疗效,几可起死回生。\n");
	set("unit", "盒");
	set("base_unit", "粒");
        set("value", 30000);
        set("base_weight", 50);
	set_amount(1);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
        int maxkee;
        object ob,me=this_player();
        maxkee=me->query("max_kee",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
	message_vision(
		"$N吃下一粒"HIY"九转熊蛇丸"NOR",只觉一股暖意从丹田升起\n", me);
        me->set("kee",maxkee);
        me->set("eff_kee",maxkee);
	add_amount(-1);
	return 1;
	
}


