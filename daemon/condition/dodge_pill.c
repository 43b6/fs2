#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIR"$N���Ϻ�����Ԫ��Ч���Ѿ���ʧ!!\n"NOR,me);
     me->add_temp("apply/dodge",-100);
     return 0;
     }
     me->apply_condition("dodge_pill",duration-1);
     message_vision(HIR"������Ԫ��Ч��������$N��������!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
