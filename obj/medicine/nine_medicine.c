inherit COMBINED_ITEM;
void create()
{
        set_name("��ת��", ({"nine pill","pill"}) );
        set("long",
        "�����˾���ҽ�߾�տ��ҽ��������,ʳ�ú�ɻظ�������.\n");
        set("unit","��");
        set("base_unit","��");
        set("no_sell",1);
        set("value",2500);
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
        int max_mana,mana;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
         message_vision("$N����һ�ž�ת��.\n", me);
         max_mana = me->query("max_mana");
         mana = me->query("mana");
        mana = mana + 100;
         if( mana > max_mana )
           mana = max_mana;
         me->set("mana",mana);
        add_amount(-1);
        return 1;
}



