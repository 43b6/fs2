inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIB"�����"NOR,({"evil-gu ovum","ovum"}));
        set("long",
"а���Ĳ���, ������භ�ĵ���, �ҳ����й�����ǿ�ĹƳ�, Ȼ��ʹ���ܷ�
�����˻��ɿ�ʳ�õĹ���, ÿ�ֹƳ涼�в�ͬ���÷�, ���ֹ��ѷ�ʳ��, ��ʳ
�����ڻ����һ����а����������ζ����ʹ�ó����˱����ᡣ\n");
	set("unit","��");
        set("base_unit", "��");
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
        message_vision("$N��ʳ��һ�����ѡ�\n",me);
	me->apply_condition("evil_pill02", i+5 );
        add_amount(-1);
        return 1;

}
