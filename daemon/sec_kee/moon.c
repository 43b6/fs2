// gather.c
#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
int msk=me->query("max_s_kee",1);
if(msk > 1200) msk=1200;
     if(me->query("s_kee")<20)
      {
          tell_object(me,"�������������\n");
          return 1;
      }

      message_vision(
         HIW + "$N�������֣�ֻ��һ������Ľ�����$N��������\n" NOR,me);
         message_vision(  HIC "\nƮ������Ľ���������Ĵ��̹�$n�澭������\n"NOR,me,target);
        target->receive_damage("kee",7*me->query("max_s_kee"));

        target->start_busy(10);
        COMBAT_D->report_status(target);
      me->add("s_kee",-20);
      me->kill_ob(target);
        return 1;
}


