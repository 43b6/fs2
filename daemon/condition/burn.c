// burn.c Desigh by Chan
//��������post
#include <combat.h>
inherit F_CLEAN_UP;
int update_condition(object me, int duration)
{
  if( !living(me) )
   {
     message("vision", me->name() + "[31m���ϵ�������δȬ��, ���Ǿ����ƺ��;��ƿ�\��!![0m\n",
     environment(me), me);
   }
  else
  if( duration > 10)
   {
     tell_object(me, "[31m��������ƺ�������, �˿ڽ���.[0m\n");
     message("vision", me->name() + "[1;31m���Ϸ��Ⱦ�ʹ, ����������ˮ������.[0m \n",
     environment(me), me);
     me->receive_wound("kee", 300);
     me->receive_damage("kee",300);
     if( (int)me->query("water")>=50 )
      me->add("water", -50);
     else
      me->set("water", 0);
    }
    else
    if( duration > 5 )
     {
      tell_object(me, "[31m��������ϵ����˿�ʼ��Ƥ��, �˿ں�����ʹ.[0m \n");
      message("vision", me->name() + "[1;31m�˿��Է�����ʹ, ����ˮ֢״��������[0m\n",
      environment(me), me);
      me->receive_wound("kee", 200);
      me->receive_damage("kee",200);
      if( (int)me->query("water")>=30 )
       me->add("water", -30);
      else
       me->set("water", 0);
      }
      else
      if( duration > 1)
      {
       tell_object(me, "[1;37m�����ϵ����˿�ʼ�����, Ҳ�о�����ʹ����.[0m \n");
       message("vision", me->name() + "[1;31m��������һ���°�, �����ܵ�������˺�.[0m \n",
       environment(me), me);
       me->receive_wound("kee", 100);
       me->receive_damage("kee",100);
       me->add("kee",-2);
       if( (int)me->query("water")>=10 )
        me->add("water", -10);
       else
        me->set("water", 0);
      }
  me->apply_condition("burn", duration - 1);
  COMBAT_D->report_status(me, 1);
  if( duration < 2 )
   return 0;
  return 1;
}
