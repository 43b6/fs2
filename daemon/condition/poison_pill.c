#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIM"$N���϶�����Ԫ��Ч���Ѿ���ʧ!!\n"NOR,me);
     me->add_temp("apply/magic",-50);
     me->add_temp("apply/spells",-50);
     return 0;
     }
     me->apply_condition("poison_pill",duration-1);
     message_vision(HIM"������Ԫ��Ч��������$N��������!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
