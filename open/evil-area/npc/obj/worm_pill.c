inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(RED"ʳ�Ƶ�"NOR,({"swallow gu egg","egg"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
		set("long","
�����ֹƳ��÷��ڹ�Ͱ�ڣ�������ʮ���첻�����κ�ʳ����伢��
����ʳ�����Ĺ��ֻ࣬������ǿ�ĹƳ棬��ʹ�������ܷ�ʹ���˻���
��ʳ�õĹƵ�����ʳ���ֹƵ����������������ڣ���Ƴ�ɳ�����Ȼ
����ʳ�ٹƣ������ڵĹƳ桢���ѡ���Ӽһ����ʳ��������ڹƶ���
��ν֮�ٹ�֮����\n");
		set("value",100000);
		set("unit","��");
		set("base_unit","��");
	}
	set_amount(1);
	setup();
}

void init()
{
add_action("do_eat","eat");
}

int do_eat(string arg)
{
object me,env,ob;

	me = this_player();
	env = environment(me);
	
        if( !arg )
		return 0;

        arg=lower_case(arg);
        if( !ob = present(arg,me) )
		return 0;
        if( ob != this_object() )
		return 0;
	message_vision("$N��ʳ��һ���Ƶ���\n",me);
	tell_object(me,HIR"
��о��ĵ��Ƶ�Ѹ�ٳɳ����Ѿ�����������ʳ�����еĹƳ桢���ѡ��Լ���Ӽ��\n"NOR);
	me->delete_temp("evil_no_damage");
	me->delete_temp("evil_no_enemy");
	me->clear_condition("evil_pill01");
	me->clear_condition("evil_pill02");
	me->clear_condition("evil_poison");
	add_amount(-1);
return 1;
}	