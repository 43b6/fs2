#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power_e",1);
     tell_object(me , "��о�����������������������,ʹ���޷�������ʹ������\n" NOR);
     me->set_temp("no_power_e",1);
     me->apply_condition("no_power_e",duration-1);
 if (duration < 1) {
     me->delete_temp("no_power_e",1);
     return 0;
                   }
        return 1;
}
