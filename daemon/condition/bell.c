#include <ansi.h>

int update_condition(object me, int duration)
{
        if(duration==0)
        {
                me->add_temp("apply/damage",-1*me->query_temp("bellup_buf"));
                me->add_temp("apply/attack",-1*me->query_temp("bellup_buf"));
                me->add_temp("apply/dodge",-1*me->query_temp("bellup_buf"));
                me->delete("bellup");
                message_vision(
                HIC "$N���ϵ�ɱ����ʧ�ˣ���ɫҲ��ñȽ��º͡�\n" NOR,me);
                return 0;
        }
        me->apply_condition("bell",duration-1);
        message_vision(
        HIR "$Nɱ�����ڣ��������ܵ�����������һ�ɿ�硣\n" NOR,me);
        if( duration < 1 ) return 0;
        return 1;
}
