// food.c

#include <dbase.h>
#include <name.h>

void init()
{
	add_action("do_eat", "eat");
}
/*
varargs string long(int raw)
{
	int amount, max;
	string str;

	if( amount = query("food_remaining") ) {
		str = ::long(raw);
		max = query("food_maximum");
		if( amount == max )
			;
		else if( amount > max/2 )
			str += "����װ���ߡ��˷�����" + query("liquid_name") + "\n";
		else if( amount >= max/3 )
			str += "����װ���塢��������" + query("liquid_name") + "\n";
		else if( amount > max/2 )
			str += "����װ�������" + query("liquid_name") + "\n";
		return str;
	}
	else return ::long(raw);
}
*/

int do_eat(string arg)
{
	object	me, ob;
	int	max_food;

	me = this_player();
	max_food = (int)this_player()->max_food_capacity();

	if (!ob = present (arg, me)) return 0;
	if( ob != this_object() ) return 0;
	if( me->is_busy() )
		return notify_fail("����һ��������û����ɡ�\n");
	if( !query("food_remaining") )
		return notify_fail( name() + "�Ѿ�ûʲô�óԵ��ˡ�\n");
	if( (int)me->query("food") >= max_food )
		return notify_fail("���Ѿ���̫���ˣ���Ҳ�������κζ����ˡ�\n");

	me->add("food", query("food_supply"));
	if ((int)me->query("food") >= max_food)
	  me->set("food", max_food);
	if( me->is_fighting() ) me->start_busy(2);

	// This allows customization of drinking effect.
	if( query("eat_func") ) return 1;

	set("value", 0);
	if(this_object()->query("get_poison"))
	{
		tell_object(this_player(),"���� ! ʳ�����ж� !\n");
		me->apply_condition(this_object()->query("get_poison"),
		                    this_object()->query("poison_power"));
	}
	add("food_remaining", -1);
	if( !query("food_remaining") ) {
		message_vision("$N��ʣ�µ�" + name() + "�Եøɸɾ�����\n", me);
		if( !this_object()->finish_eat() )
			destruct(this_object());
	} else 
message_vision("$N����" +name() + "������һ����������һ���档\n",me);

	return 1;
}
