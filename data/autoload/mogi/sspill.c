// made by roger
//300��
inherit COMBINED_ITEM;
#include <ansi.h>
void create()
{
        set_name(HIR"�����컯��"NOR, ({"sen sen pill","pill"}) );
	set("long",
"���쵤ҩ,�ɽⶾ,����,�������\n");
	set("unit", "��");
    set("no_steal",1);
	set("base_unit", "��");
        set("value", 100000);
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
        int maxkee,maxforce;
        object ob,me=this_player();
        maxkee=me->query("max_kee",1);
        maxforce=me->query("max_force",1);
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
	message_vision(
"$N����һ��"HIR"�����컯��"NOR",ֻ����ȫ��������ˬ����������\n",me);
        me->set("kee",maxkee);
        me->set("eff_kee",maxkee);
        me->set("force",maxforce);
        me->clear_condition();
	add_amount(-1);
	return 1;
	
}

int query_autoload()
{
 return 1;
}
