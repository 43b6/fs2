#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me, object target)
{
        string msg;
        object ob;
        string *name;

        if( !target ) target = offensive_target(me);

        if(me->query_skill("dragonforce",1) < 50 )
              return notify_fail("��Ľ����ķ��������죬ʹ���˷�����\n");
        if( (string)me->query_skill_mapped("force")!= "dragonforce")
                return notify_fail("�˷���������Ͻ����ķ������á�\n");
if(!(ob=me->query_temp("weapon"))||(string)ob->query("skill_type")!="staff")
       return notify_fail("ֻ�����ð��Ӳ���ʹ��ม�\n");
          if(me->query("force")<300)
                           return notify_fail("�������������\n");
                  if(me->query("kee")<200)
                           return notify_fail("�����������\n");

        if(!me->is_fighting())  
        {
                tell_object(me,"�˷�����ֻ��ս���в���ʹ�á�\n");
                return 0;
        }
       if(me->query("force")<300)
                           return notify_fail("�������������\n");
                  if(me->query("kee")<200)
                           return notify_fail("�����������\n");

        if(!me->is_fighting())  
        {
                tell_object(me,"�˷�����ֻ��ս���в���ʹ�á�\n");
                return 0;
        }
        message_vision(
HIR"$N��Ȼ����ŭ��,�λ��˷�����������ʹ���򹷰���֮��ѧ"HIW"���˷����ꡱ"HIR"ֻ��$N�������,Խ��Խ���γ������İ�Ӱ\n"NOR,me,target);
        {
        message_vision(
            HIW"ֻ����ر�ɫ������İ�Ӱ����ǵذ���$nϮȥ\n"NOR,me,target);
            me->add("kee",-30);
             me->add("force",-(100 - ((int)me->query_skill("dragonforce",1)))*3)
;
        if(random(me->query_skill("staff")+20)>random(target->query_skill("dodge
")))
        {
 message_vision(
HIR"\n$n�������İ����޷����,�������İ��ӻ���Ҫ��,����������ʹ���쳣!!!\n"NOR,me,target);
                message_vision( NOR,me);
target->receive_wound("kee",me->query_skill("pd-staff",1)*3+random(me->query_skill("dragonforce",1)*2));
                COMBAT_D->report_status(target);
        }
        else
      {
                message_vision(
HIW"$n�������Ƶ�©����ǧ��һ��֮��,������˷����ꡯ�Ĺ���!!!\n"NOR,me,target);
                message_vision( NOR,me);
       }
        message_vision(
            "���˷����ꡯʹ�ú�$N����������˹���Ϣ���޷��ƶ�\n",me,target);
        me->start_busy(2);
        me->kill_ob(target);
          function_improved("eight",random(me->query("force")/10));
        message_vision( NOR,me);
        return 1;
  }
}
