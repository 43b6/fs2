// made by ccat
inherit COMBINED_ITEM;
void create()
{
        set_name("ʮ����������", ({"10 gin pill","pill"}) );
	set("long",
		"ʮ��������,����������,�����������(eat pill).\n");
	set("unit", "��");
	set("base_unit", "��");
        set("value", 1000);
        set("base_weight", 50);
	set_amount(10);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{       
        int max,now,now1,kee1;
        object ob,me=this_player();
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	if (query_amount() == 0)	return 0;
	add_amount(-1);
	if (query_amount() == 0) destruct(this_object());
	printf ("ʣ %d ��.\n", query_amount());
	message_vision(
		"$N����һ��������.\n", me);
        max = me->query("max_gin");
        kee1 = me->query("kee");
        if(kee1 > 40 )
        {
           me->add("kee",-30);
           me->add("gin",25);
        }else
        {
          write("�����̫���޷�ת���ɾ�.\n");
        }   
        now = me->query("gin");
        if(now > max)
        {   
            me->set("gin",max);
            now = max;
        }
	return 1;
	
}

