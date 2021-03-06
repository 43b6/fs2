// cold.c Desigh by Chan
#include <combat.h>
inherit F_CLEAN_UP;
int update_condition(object me, int duration)
{
  if( !living(me) )
   {
     message("vision", me->name() + "[1;36m身上所受冻伤尚未痊愈, 使寒气在身体之中无法驱出了!![0m\n",
     environment(me), me);
   }
  else
  if( duration > 10)
   {
     tell_object(me, "[1;37m你受的冻伤十分严重, 使传导神经受阻让四肢没有任何知觉.[0m\n");
     message("vision", me->name() + "[36m全身受到寒气所侵,寒斑点点,使之丹田内的内息无法运转如常.[0m \n",
     environment(me), me);
     me->receive_wound("kee", 300);
     me->receive_damage("kee", 300);
     if(me->is_fighting())
     me->start_busy(1);
     if( (int)me->query("food")>=50 )
     me->add("food", -50);
     else
     me->set("food", 0);
    }
    else
    if( duration > 5 )
     {
      tell_object(me, "[1;37m你默运内功将寒气慢慢逼出,感觉身上的冻伤减轻不少,也慢慢有血色了.[0m \n");
      message("vision", me->name() + "[1;36m虽然全身四肢仍无知觉,但内息己慢慢能运转如常[0m\n",
      environment(me), me);
      if(me->is_fighting())
      me->start_busy(1);
      me->receive_wound("kee", 200);
      me->receive_damage("kee",200);
      if( (int)me->query("food")>=30 )
      me->add("food", -30);
      else
      me->set("food", 0);
      }
      else
      if( duration > 1 )
      {
       tell_object(me, "[1;37m你运起内功将你身上的寒气完全消除了,内息恢复成往常一样了[0m. \n");
       message("vision", me->name() + "[36m虽然寒气消除了,但身上还留下寒气所侵的痕迹[0m. \n",
       environment(me), me);
       me->receive_wound("kee", 100);
       me->receive_damage("kee", 100);
       if( (int)me->query("food")>=10 )
       me->add("food", -10);
       else
       me->set("food", 0);
      }
  me->apply_condition("cold", duration - 1);
  COMBAT_D->report_status(me);
  if( duration < 1 )
  return 0;
  return 1;
}
