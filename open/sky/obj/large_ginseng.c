inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIC"�����˲�"NOR, ({"large ginseng","ginseng"}) );
        set("long","��һ���˼��������캮�ض���ѩɽ�����ҵ��������˲Σ�����ǿ������Ч��!!\n");
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1); 
        set("no_put",1);
        set("unit", "��");
        set("base_unit", "��");
        set("value", 500000);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
	if( this_player()==environment() )
	add_action("eat_pill", "eat");
}

int eat_pill(string arg)
{
        int force;
        object ob,me=this_player();
        force=me->query_skill("force",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
        if( ob != this_object() )       return 0;
	return 0;

	message_vision("$N�����ڣ�һ��һ�ڵ�ҧ��"HIY"�����˲�"NOR"�����ϵ�����Ҳһ��һ�ε�����!!",me);
	me->set_skill("force",force+15);
	me->clear_condition();
	me->add("quests/large_ginseng",1);
	add_amount(-1);
	return 1;     
}

