inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIY"������"NOR,({"whirlpool pill","pill"}));
        set("long",
"а���Ĳ���֮һ��\n");
	set("unit","��");
        set("base_unit", "ֻ");
	set("value",500000);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
add_action("eat_pill", "eat");
}

int eat_pill(string arg)
{
        object ob,me;
	int i;

		me = this_player();
		i = (int)me->query_condition("evil_pill02");

        if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;
        message_vision("$N��ʳ��һ��$n�����ڲ��ϵ�ɢ�������ζ��\n",me,ob);
	me->delete_temp("evil/water/killed");
        add_amount(-1);
        return 1;

}
