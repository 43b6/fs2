// made by ccat
inherit COMBINED_ITEM;
void create()
{
        set_name("ѩ����", ({"force pill","pill"}) );
	set("long",
"���������н�������ɽ��������֮��ҩ,���Իָ���������.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(eat pill).\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
set("value",7000);
        set("base_weight", 50);
	set_amount(1);
	setup();
}

void init()
{
	if( this_player()==environment() )
	{
		add_action("eat_pill", "eat");
	}	
}

int eat_pill(string arg)
{      

        object ob,me=this_player();
	int max_force,force;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	message_vision("$N����һ��ѩ����.\n", me);
        max_force = me->query("max_force");
        force = me->query("force");
        force = force + 500;
        if( force > max_force )
            force = max_force;
	me->set("force",force);
	add_amount(-1);
        return 1;
}

              
                           
