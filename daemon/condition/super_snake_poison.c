// snake_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
      if(duration==0) return 0;
	me->receive_wound("kee",30);
	me->receive_damage("sen", 10);
        me->start_busy(2);
	me->apply_condition("super_snake_poison",duration - 1);
	tell_object(me, HIG "���е��߶������ˣ�\n" NOR );
	if( duration < 1 ) return 0;
	return 1;
}
