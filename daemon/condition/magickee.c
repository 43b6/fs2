#include <ansi.h>

int update_condition(object me, int duration)
{
        if(duration==0)
        {
        message_vision(
        HIR "$N���Ƶ���⽥��ɢȥ���ƺ��������ö���!!\n" NOR,me);
        return 0;
        }
        me->apply_condition("magickee",duration-1);
        message_vision(HIY"$N������������������Ѳ�������ʹ��Ĳ����Լ�!!\n" NOR,me);
        me->start_busy(1);
        me->receive_wound("sen",10);
        me->receive_wound("kee",10);
        me->receive_wound("gin",10);
        if( duration < 1 ) return 0;
        return 1;
}

