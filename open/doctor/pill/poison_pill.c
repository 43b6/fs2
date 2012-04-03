// made by ccat 
inherit COMBINED_ITEM;
void create()
{
        set_name("百花清心露", ({"flower pill","pill"}) );
	set("long",
	"一粒,百花清心露,能克百毒,你可以吞下它(eat pill).\n");
	set("unit", "盒");
	set("base_unit", "粒");
        set("value", 15000);
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
        object ob,me=this_player();
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
	message_vision(
		"$N吃下一粒百花清心露.\n", me);
        me->clear_condition();
	add_amount(-1);
	return 1;
	
}

