//����ҩˮ���������,��������ĵ���......           made by eva  
inherit COMBINED_ITEM;
void create()
{
        set_name("��ɫ����ҩˮ", ({"blue potion","potion"}) );
	set("long","��ɫ��Һ�巴�������Ĺ�â, ��ȫ��֪��������ҩˮ.
��˵���˻�ʹ�˿�Ѹ�ٸ�Ԫ, ����ȴ����ظ�������.\n");
        set("unit", "��");
        set("base_unit", "��");
        set("value",100000);
        set("base_weight", 150);
	set_amount(1);
	setup();
}

void init()
{
	if( this_player()==environment() )
	{
		add_action("drink_potion", "drink");
	}	
}

int drink_potion(string arg)
{      

        object ob,me=this_player();
	int max_kee,eff_kee;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	message_vision("$N����һ����ɫ����ҩˮ.\n", me);
        max_kee = me->query("max_kee");
        eff_kee = me->query("eff_kee");
        eff_kee = eff_kee + 200;
        if( eff_kee > max_kee )
            eff_kee = max_kee;
	me->set("eff_kee",eff_kee);
	add_amount(-1);
        return 1;
}

              
                           
