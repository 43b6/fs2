inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIY"�ǹ�Ӽ"NOR,({"bon-gu pupa","pupa"}));
        set("long",
"а���Ĳ���, ������භ�ĵ���, �ҳ����й�����ǿ�ĹƳ�, Ȼ��ʹ���ܷ�
�����˻��ɿ�ʳ�õĹ�Ӽ, ÿ�ֹƳ涼�в�ͬ���÷�, ���ֹ�Ӽ��ʳ��, ����
�ڷ�ʳ������, ��ɳ��ɹƳ�ʱ, ��ɢ����һ�ֶ��, ���Ա����ܵ�һЩǱ��
�ĳ��๥����\n");
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
		i = (int)me->query_condition("evil_pill01");

        if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;
        message_vision("$N��ʳ��һ�ų�Ӽ��\n",me);
	me->apply_condition("evil_pill01", i+5);
        add_amount(-1);
        return 1;

}
