inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name("������Ԫ��", ({"mana pill","pill"}) );
        set("long",
        "�����ʥҩ������˲��ָ������ķ�����\n");
        set("unit", "��");
        set("base_unit", "��");
        set("value", 10000);
        set("base_weight", 50);
        set("no_sell",1);
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
        int maxmana=me->query("max_mana");      
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
        message_vision(
                "$N����һ����Ԫ��,ֻ��һ��ů���Ʊ�ȫ��\n", me);
        if(maxmana > 300) 
          me->add("mana",300);
		if(me->query("mana") > me->query("max_mana"))
			me->set("mana",maxmana);
        else
          me->set("mana",maxmana);
        add_amount(-1);
        return 1;

}
