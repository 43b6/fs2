//����ҩˮ���������,��������ĵ���......           made by eva  
inherit COMBINED_ITEM;
void create()
{
        set_name("��ɫ����ҩˮ", ({"red potion","potion"}) );
	set("long","��ɫ��Һ�巴�������Ĺ�â, ��ȫ��֪��������ҩˮ.
��˵���˻���ٻظ���ľ�.\n");
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
	int eff_gin,gin;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	message_vision("$N����һ�޺�ɫ����ҩˮ.\n", me);
        eff_gin = me->query("eff_gin");
        gin = me->query("gin");
        gin = gin + 200;
        if( gin > eff_gin )
            gin = eff_gin;
	me->set("gin",gin);
	add_amount(-1);
        return 1;
}

              
                           
