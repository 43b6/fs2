#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
int msk=me->query("max_s_kee",1);
if(msk > 500) msk=500;
     if(me->query("s_kee")*5<me->query("max_s_kee"))
      {
          tell_object(me,"�������������\n");
          return 1;
      }
 if(!me->is_fighting())
  return notify_fail("ս���в���ʹ���޼�����!!!��\n");
 if(!target->is_fighting())
  return notify_fail("�Է��������ڴ���ս��֮�У������޷�ʹ���޼�����!!!\n");
  message_vision(
     HIG + "$N���һ�������������޼�������ֻ��������â��$N���������\n" NOR,me);
       message_vision(  CYN "���ͻ�������Ľ���$N��ǰһ�..����������â���������\n" NOR,target);
       target->receive_damage("kee",2*me->query("max_s_kee"));
      COMBAT_D->report_status(target);
      me->set("s_kee",0);
      me->kill_ob(target);
      return 1;
}
