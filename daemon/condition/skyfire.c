// skyfire by xman

#include <ansi.h>

int update_condition(object me, int duration)
{
        if(duration==0) return 0;
        me->receive_damage("kee",250);
        me->receive_damage("gin",250);
        me->apply_condition("skyfire",duration-1);
        tell_object(me,HIR"���ܵ�"HIW"��������"HIR"��"HIY"�ŵ�����"HIR"�Ľ���尾, ����ʹ�������!\n"NOR);
        message("vision",HIR+me->name()+"�ܵ�"HIW"��������"HIR"��"HIY"�ŵ�����"HIR"�Ľ���尾, ����ʹ�������!\n"NOR,environment(me),me);
        COMBAT_D->report_status(me);
        if( duration < 1 ) return 0;
        return 1;
}
