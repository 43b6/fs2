///�����һ�
#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int perform(object me, object target)
{
        int g,force;
        g = me->query_skill("gforce");
        force = me->query("force");
        if( !me->query("marks/ice-fire"))
                return notify_fail("�������������,����ʹ�����������һ𾢡�\n");
        if( me->query("family/family_name")!="�����")
        return notify_fail("��������,��ʼ������!\n");
        if( me->query_skill_mapped("force")!="gforce" )
        return notify_fail(HIY"hmm �� ���õ���ʲô�ķ���!��\n"NOR);
        if( me->query_skill("gforce",1)<50 )
                return notify_fail("������Ǻӻ��������졣\n");
        if( force<200 )
                return notify_fail("����������������𺮱��һ𾢡�\n");
        if( !target ) target = offensive_target(me);
     if(target->is_busy())
     return notify_fail("���� BUSY �У��칥���ɣ�\n");
      message_vision(HIB+
"              $Nŭ�����ᣬ�������ϵ��˿ڣ����ϵؽ���������ʮ���ɡ�\n        
                          "HIR"$N���Ϸ���һ��ǿ���ɱ��\n
                 "HIY"$N��ȫ��ʼ����ǿ�ҵ�"HIW"����"HIW"��"HIR"�һ�"HIY"��������������\n
                   "HIW"�� ��������ԴԴ���ϵ����������ۣ� ��\n
                              "HIY"ٿ��$N���һ��\n
              "HIY"����ʹ��һ��"RED"����"MAG"��ѧ"HIY"��֮�ռ����� - -"HIW"�� �� ��"HIY"��-\n
              "HIC"����һ��ʹ��"RED"����"MAG"��ѧ"HIC"��֮��ѧ�ؼ� ����"HIR"�� �� ��"HIC"���� \n��
                  "HIB"ֻ���������һ������������籩���ػ������\n
                     "HIW"��������֮����֮��"HIC" ��"HIW"����"HIR"�һ�"HIW"��"HIC"��\n"+NOR,me,target);

        me->add("force", -g*2);
 if(random(g)>random(target->query_skill("dodge",1)))
               {
   target->start_busy(2);
 target->add("kee",-2*g);
 target->apply_condition("blockade",3);
                message_vision(HIR"$n���㲻��,�������һ���������͸�����,ȫ�����±��һ𼰺�����Χ��,��ͣ��˻��!\n"NOR,me,target);
                COMBAT_D->report_status(target);
               }
       else
               {
                message_vision(HIM"$n�����ڹ���������$N�������һ���������������\n"NOR,me,target);
               }
        me->start_busy(1);
        return 1;
}


