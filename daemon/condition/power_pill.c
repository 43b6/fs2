#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIC"$N����������Ԫ��Ч���Ѿ���ʧ!!\n"NOR,me);
     me->add_temp("apply/force",-25);
     return 0;
     }
     me->apply_condition("power_pill",duration-1);
     message_vision(HIC"������Ԫ��Ч��������$N��������!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
