// rose_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
     if(duration==0) return 0;
          me->receive_wound("gin",10);
	me->receive_damage("kee", 10);
          me->apply_condition("flower_poison", duration-1);
        tell_object(me, HIR "你的花柳病发作了！\n" NOR );
    message("vision",HIR+me->name()+"的花柳病发作了！\n" NOR,environment(me),me);
	if( duration < 1 ) return 0;
	return 1;
}
