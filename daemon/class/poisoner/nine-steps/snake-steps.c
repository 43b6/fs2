#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int sk;
void remove_effect (object me);
int perform(object me, object target)
{
sk=me->query_skill("nine-steps",1);
if (sk<80)
     return notify_fail ("���ļ��ܵȼ��в���ʹ�ô˼���!\n");
  if (me->query ("force") < 200)
     return notify_fail ("������������!\n");
  if ((int)me->query_temp ("snake-steps", 1))
     return notify_fail ("���Ѿ�ʹ�����߻�Ӱ�ˡ�\n");
  if ( me->query("class") !="poisoner" )
     return notify_fail ("�����������޷�ʹ�����߻�Ӱ��\n");

if( me->is_fighting() ) me->start_busy(1); //

  message_vision ("\n"HIY"$N"NOR"������ת,��ʹ��"HIG"������Ӱ����"NOR"�ռ�����"HIW"��"HIY"�顣�ߡ��á�Ӱ"HIW"��"NOR"\n",me,target);
  me->add ("force", -200);

       
  message_vision (HIM"ɲʱ��$N�����˱�������߰���\n"NOR, me,target);

// �����mark�����dodge_sp ��
  me->set_temp ("snake-steps", 1);
   
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),sk*2);

  return 1;
}

void remove_effect (object me)
{
// ɾ�� manashield   
int fun=me->query("functions/snake-steps/level");
  me->delete_temp ("snake-steps");
  tell_object (me, NOR"�������Լ����������������ˡ�\n"NOR);
  if(fun<100) function_improved("snake-steps",random(500)+sk);   
  return;
}
