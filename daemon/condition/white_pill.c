#include <ansi.h>
int update_condition(object me, int duration,int j)
{
     if(duration==1) 
     {  
     message_vision(HIW"$N���ϰ�����Ԫ��Ч���Ѿ���ʧ!!\n"NOR,me);
     me->delete_temp("hardshell");
     return 0;
     }
     me->apply_condition("white_pill",duration-1);
     message_vision(HIW"������Ԫ��Ч��������$N��������!!\n"NOR,me);
     if( duration < 1 )
     return 0;
     return 1;
}
