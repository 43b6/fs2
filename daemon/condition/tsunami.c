// tsunami by xman

#include <ansi.h>

int update_condition(object me, int duration)
{
        if(duration==0) return 0;
        me->receive_damage("kee",250);
        me->start_busy(1);
        me->apply_condition("tsunami",duration-1);
        tell_object(me,HIB"���ܵ�"HIC"���֮��"HIB"�ĳ��, ��Ϣ���˳���ķ�ӿ\n"NOR);
        message("vision",HIB+me->name()+"�ܵ�"HIC"���֮��"HIB"�ĳ��, ��Ϣ���˳���ķ�ӿ\n"NOR,environment(me),me);
        COMBAT_D->report_status(me);
        if( duration < 1 ) return 0;
        return 1;
}

