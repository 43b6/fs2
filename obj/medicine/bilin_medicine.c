inherit COMBINED_ITEM;
void create()
{
        set_name("���鵤", ({"bie pill","pill"}) );
        set("long",
        "���������н�������ɽ��������֮��ҩ,���Իָ���������.\n"+
        "��Ҫ�뾭ҩʦ����(check item),����ʳ��(eat pill).\n");
        set("unit", "��");
        set("base_unit", "��");
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
        int heal;
        object ob,me=this_player();
        heal = this_player()->query("max_kee")/10;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
        message_vision("$N����һ�����鵤.\n", me);
        me->receive_curing("kee", heal );
        add_amount(-1);
        return 1;
}

