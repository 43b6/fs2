#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIG"$N����������Ԫ��Ч���Ѿ���ʧ!!\n"NOR,me);
     me->add_temp("apply/blade",-50);
     return 0;
     }
     me->apply_condition("blade_pill",duration-1);
     message_vision(HIG"������Ԫ��Ч��������$N��������!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
