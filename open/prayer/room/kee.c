
// keng_kee.c

#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me, object target)
{
        string msg;
        object ob;
        string *name;

        if( !target ) target = offensive_target(me);

          if(me->query_skill("haoforce",1) < 100 - ( me->query("con") + me->query("cps")*1.2 ) )
             return notify_fail("��ĺ����ķ��������죬�޷�����ָ�⡣\n");
        if( (string)me->query_skill_mapped("unarmed")!= "lungshan")
                return notify_fail("����������������ɽ��ѧ�����á�\n");
         
      if(!(ob=me->query_temp("weapon"))) 
        { if(me->query_temp("secondary_weapon"))
          return   notify_fail("��������ô�����վ�?\n");} 
        if(ob=me->query_temp("weapon")) 
        {
         if((string)ob->query("skill_type") != "unarmed") 
            return   notify_fail("��������ô�����վ�?\n");
          }
          if(me->query("force")<250)
                           return notify_fail("�������������\n");
                  if(me->query("kee")<180)
                           return notify_fail("�����������\n");

        if(!me->is_fighting())  
        {
                tell_object(me,"�����\��Ψ��ս���в���ʹ�á�\n");
                return 0;
        }
        message_vision(
            "[1m$N���І����дʣ���������ķ��еġ�[1;31m���վ�[0m[1m��\n
               $N��ʱһ���������ҵ�����������$N����ֻ��$N\n
               ȫ�������ȣ�ָ��ۼ�һ�������Ĺ���\n\n",me,target);

        {
        message_vision(
            "[1m$N�˾�ָ�⣬һ���������\������ȥ��[0m\n",me,target);

            me->add("kee",-50);
                  me->add("force",-(110 - ((int)me->query_skill("haoforce",1)))*3);
        if(random(me->query_skill("unarmed")+20)>random(target->query_skill("dodge")))
        {
                message_vision(
                    "\n$n��ܲ��������\�����У���ʱ�һ�����$nȫ��˻�����ϣ�\n",me,target);
                message_vision( NOR,me);
                target->apply_condition("burn",random(10) +((int)me->query_skill("haoforce", 1)/8 ));
                  target->receive_wound("kee",me->query_skill("haoforce",1)*4+random(me->query_skill("haoforce",1)*2));
                COMBAT_D->report_status(target);
        }
        else
      {
                message_vision(
                "$n�˹��ܿ����������\��������ֻ��$n���˿ڽ���һ�顣\n",me,target);
                message_vision( NOR,me);
                target->apply_condition("burn",random(10) +((int)me->query_skill("haoforce", 1)/8 ));
                COMBAT_D->report_status(target);
       }
        message_vision(
            "�������\���������$N�����������Ϣ���ң��޷��ƶ�\n",me,target);
        me->start_busy(2);
        me->kill_ob(target);
          function_improved("kang_kee",random(me->query("force")/10));
        message_vision( NOR,me);
        return 1;
  }
}
