// By Swy ������� QC 98/6/20
// Modify by AceLan ���������� 99/04/05
#include <ansi.h>
int perform(object me,object target)
{
   int i;
   if( !target ) return notify_fail("��Ҫ��˭�ü� ?\n");
   if( userp(target) ) return notify_fail("���ж�����û�á�\n");
   if( me->query("sen") < 20 )
      return notify_fail("��ľ������������޷��üơ�\n");
   if( me->query_skill("plan",1) < 45 )
      return notify_fail("���ı������������\n");
   if( target->query_temp("follow")==1 )
      return notify_fail("��ͬ�ļƲ߶�ͬһ����û��Ч��\n");
   if( target->query("no_plan_follow") == 1)
       return notify_fail("�˼Ʋ��޷��Դ���ʹ��!!!\n");
   me->add("sen",-15);
// ����...
   if( me->query("family/family_name") != "����")
      return notify_fail("�������������������֣���^_^\n");
   me->start_busy(1);

         if(target->query_temp("no_plan") || target->query("no_plan"))
         {
         message_vision("$N��Ȼ������˵��,���Ҷ���ʹ���յм�,�������ǲ������!!\n
         \n",target);
         target->kill_ob(me);
         me->start_busy(3);
         }
         else{
      message_vision(HIG + @LONG
$n����$N���յ�֮�ƣ�ͻȻ��Ȼ��ŭ������$n��ɱ��$N�ǲ�����ݵģ�
LONG + NOR , me , target );
      target->set_leader(me);
target->kill_ob(me);
         }
      target->set_temp("follow",1);
   return 1;
}

