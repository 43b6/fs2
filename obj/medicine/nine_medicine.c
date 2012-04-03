inherit COMBINED_ITEM;
void create()
{
        set_name("九转金丹", ({"nine pill","pill"}) );
        set("long",
        "此物乃经过医者精湛的医术所炼制,食用后可回复少许法力.\n");
        set("unit","盒");
        set("base_unit","颗");
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
         message_vision("$N吃下一颗九转金丹.\n", me);
         max_mana = me->query("max_mana");
         mana = me->query("mana");
        mana = mana + 100;
         if( mana > max_mana )
           mana = max_mana;
         me->set("mana",mana);
        add_amount(-1);
        return 1;
}



