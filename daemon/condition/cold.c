// cold.c Desigh by Chan
#include <combat.h>
inherit F_CLEAN_UP;
int update_condition(object me, int duration)
{
  if( !living(me) )
   {
     message("vision", me->name() + "[1;36m�������ܶ�����δȬ��, ʹ����������֮���޷�������!![0m\n",
     environment(me), me);
   }
  else
  if( duration > 10)
   {
     tell_object(me, "[1;37m���ܵĶ���ʮ������, ʹ��������������֫û���κ�֪��.[0m\n");
     message("vision", me->name() + "[36mȫ���ܵ���������,���ߵ��,ʹ֮�����ڵ���Ϣ�޷���ת�糣.[0m \n",
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
      tell_object(me, "[1;37m��Ĭ���ڹ������������Ƴ�,�о����ϵĶ��˼��᲻��,Ҳ������Ѫɫ��.[0m \n");
      message("vision", me->name() + "[1;36m��Ȼȫ����֫����֪��,����Ϣ����������ת�糣[0m\n",
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
       tell_object(me, "[1;37m�������ڹ��������ϵĺ�����ȫ������,��Ϣ�ָ�������һ����[0m. \n");
       message("vision", me->name() + "[36m��Ȼ����������,�����ϻ����º������ֵĺۼ�[0m. \n",
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
