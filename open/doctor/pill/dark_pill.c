inherit COMBINED_ITEM;
void create()
{
        set_name("��涾��ҩ", ({"dark_medicine"}) );
        set("long",
"����һ����������涾��ҩ��\n");
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
        	message_vision("$N������涾�Ľ�ҩ.\n", me);
      	me->apply_condition("dark_poison", 0);
        	add_amount(-1);
        	return 1;
}
