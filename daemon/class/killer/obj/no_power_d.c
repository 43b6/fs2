#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power_d",1);
     tell_object(me ,HIG"����������̹�Ӱ�죬������޷���׼��ʹ�þ���!!\n" NOR);
     me->set_temp("no_power_d",1);
     me->apply_condition("no_power_d",duration-1);
 if (duration < 1) {
     me->delete_temp("no_power_d",1);
     return 0;
                   }
        return 1;
}
