#include <ansi.h>
int update_condition(object me, int duration)
{
if( duration == 0 )
return 0;
  if( duration >= 1 )
  {
     tell_object(me,HIB"���ͻȻ�о����������㡢��Ѫʧ�����澫�����ܴ�����Ȼ����֮������ЧӦ��!!\n"NOR);
     message_vision(HIR"$NͻȻ���ز���, ��Ȼ������Ѫ, �澭�����ܵ�����, ��ʱ�޷�����!!\n"NOR,me);
     me->receive_wound("gin",me->query("eff_gin")/10);
     me->receive_wound("kee",me->query("eff_kee")/10);
     me->receive_wound("sen",me->query("eff_sen")/10);
     COMBAT_D->report_status(me, 1);
     me->start_busy(1);
     me->apply_condition("fog-poison", duration - 1);
  return 1;
  }
        if( duration < 1 ) 
        return 0;
return 1;
}
