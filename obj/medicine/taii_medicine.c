inherit COMBINED_ITEM;
void create()
{
        set_name("̫����ڤ��", ({"taii pill","pill"}) );
        set("long",
        "�����˾���ҽ�߾�տ��ҽ��������,ʳ�ú�ɻظ���������.\n");
        set("unit", "��");
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
        int max_atman,atman;
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
        message_vision("$N����һ��̫����ڤ��.\n", me);
        max_atman = me->query("max_atman");
        atman = me->query("atman");
        atman = atman + 100;
        if( atman > max_atman )
        atman = max_atman;
        me->set("atman",atman);
        add_amount(-1);
        return 1;
}


