#include <ansi.h>
int update_condition(object me, int duration)
{
        if(duration==0) return 0;
        me->start_busy(2);
        me->apply_condition("faint", duration - 1);
        tell_object(me, HIR "你体内毒素太多，伤及自身啰！\n" NOR );
        message("vision",HIB+me->name()+"脸色发白，途然抖了一下。\n"NOR,environment(me),me);
        if( duration < 1 ) return 0;
        return 1;
}

