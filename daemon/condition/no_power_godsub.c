// no_power for godsub
#include <ansi.h>
int update_condition(object me, int duration)
{
if(duration==0) me->delete_temp("no_power_godsub",1);
     message_vision(HIR"$N�������Ͻ�ʥ֮����������������ɵ�Ӱ�졣\n"NOR,me);
     me->set_temp("no_power_godsub",1);
     me->add("kee",-500);
     me->add("force",-1000);
     me->apply_condition("no_power_godsub",duration-1);
 if (duration < 1) {
     me->delete_temp("no_power_godsub",1);
     message_vision(HIW"$N��������޼���������ȫ��������ĸ��ɡ�\n"NOR,me);
     return 0;
   }
        return 1;
}
