inherit COMBINED_ITEM;
void create()
{
        set_name("����а����ҩ", ({"firefinger_medicine"}) );
        set("long",
"����һ�����������а����ҩ��\n");
        set("base_unit", "��");
        set("unit", "��");
        set("no_sell",1);
        set("value",2500);
        set_amount(1);
        setup();
}
void init()
{
                add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
	object ob,me=this_player();
        	if( !arg )                     
	 	return 0;
	if( !ob = present(arg,me) )     
		return 0;
        	if( ob != this_object() )       
		return 0;
        	message_vision("$N���»���а���Ľ�ҩ.\n", me);
      	me->apply_condition("fire_poison", 0);
        	add_amount(-1);
        	return 1;
}
