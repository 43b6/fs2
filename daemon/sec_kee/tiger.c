// gather.c 
#include <combat.h> 
#include <ansi.h>
inherit SSERVER; 
int kee_out(object me,object target)
{
 if(!me->is_fighting())
  return notify_fail("�׻�֮��ս���в���ʹ��!!!��\n");
 if(!target->is_fighting())
  return notify_fail("�Է��������ڴ���ս��֮�У������޷�ʹ���׻�֮��!!!\n");
        if(me->query("max_s_kee")<20)
     {
          tell_object(me,"�����������������\n");
             return 1;
     }
if(me->query("s_kee") < 20 )
{ tell_object(me,"��û�㹻��������\n");
  return 1; }
 if(target->query_temp("tiger")==1) {
 tell_object(me,"���������׻����������á�\n");
 return 1; }
     message_vision(
          HIY "$N�������������׻�֮���ڳ���\n" NOR,me);
       message_vision(
          CYN "$n���׻�֮����ס�����ܶ�����\n" NOR,me,target);
        target->start_busy(2);
        target->set_temp("tiger",1);
        target->apply_condition("tiger_out",me->query("max_s_kee")/20);
        me->kill_ob(target);
        me->set("s_kee",0);
     return 1;
 
}

