// made by ccat 
inherit COMBINED_ITEM;
void create()
{
set_name("����Ƣ͸��",({"super pill","pill"}));
	set("long",
"һ��,����Ƣ͸��,�ܽ�ٶ�,�����������(eat pill).\n");
set("unit","��");
	set("base_unit", "��");
set("value",500000);
        set("base_weight", 50);
        set("no_save",1);
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
"$N����һ������Ƣ͸��.\n",me);
me->clear_condition("five_poison");
me->clear_condition("dark_poison");
me->clear_condition("tiger_out");
me->clear_condition("blade");
me->clear_condition("bleeding");
me->clear_condition("blockade");
me->clear_condition("burn");
me->clear_condition("cold");
me->clear_condition("hart");
me->clear_condition("lyssa");
me->clear_condition("skyfire");
me->clear_condition("fire_poison");
me->clear_condition("rose_poison");
me->clear_condition("flower_poison");
me->clear_condition("snake_poison");
me->clear_condition("dragon_out");
me->clear_condition("spring");
me->clear_condition("dragon_out");
me->clear_condition("tiger_out");
	add_amount(-1);
	return 1;
	
}

