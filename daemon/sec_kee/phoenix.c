// gather.c
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
int msk=me->query("max_s_kee",1);
if(msk > 500) msk=500;
     if(me->query("s_kee")<10)
      {
          tell_object(me,"�������������\n");
          return 1;
      }
        if(me->query("class") != "marksman")
        {
         tell_object(me,"�㲻�����ָ����޷���������֮�������!!!\n");
                return 1;
        }

 if(!me->is_fighting())
  return notify_fail("�������ս���в���ʹ��!!!��\n");
 if(!target->is_fighting())
  return notify_fail("�Է��������ڴ���ս��֮�У������޷�ʹ�û������!!!\n");
 if(target->query_temp("phoenix")==2) {
 tell_object(me,"�����ѱ�����������ƣ��޷��ڶ��ˡ�\n");
 return 1; }
      message_vision(
         HIC + "$N���л�������һ�����ԣ�ֻ��һֻ����Ѹ���ƿս��£�\n" NOR,me);
         message_vision(  HIR "����Ѹ�ٷ���$n��������$N�����ڡ�\n" NOR,me,target);
        target->receive_damage("kee",me->query("max_atman")/5);
        target->start_busy(1);
        target->add_temp("phoenix",1);
        target->apply_condition("phoenix_out",me->query("max_s_kee")/10);
      COMBAT_D->report_status(target);
      me->add("s_kee",-10);
      me->kill_ob(target);
        return 1;
}
