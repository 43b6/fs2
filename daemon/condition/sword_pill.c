#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIY"$N���ϻ�����Ԫ��Ч���Ѿ���ʧ!!\n"NOR,me);
     me->add_temp("apply/stabber",-50);
     me->add_temp("apply/sword",-50);
     return 0;
     }
     me->apply_condition("sword_pill",duration-1);
     message_vision(HIY"������Ԫ��Ч��������$N��������!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
