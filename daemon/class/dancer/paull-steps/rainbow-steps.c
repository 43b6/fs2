#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;
int sk;
void remove_effect (object me);
int perform(object me, object target)
{
sk=me->query_skill("paull-steps",1);
if (sk<80)
     return notify_fail ("���ļ��ܵȼ��в���ʹ�ô˼���!\n");
  if (me->query ("force") < 50)
     return notify_fail ("������������!\n");
  if ((int)me->query_temp ("rainbow-steps", 1))
     return notify_fail ("���Ѿ�ʹ���߲ʻ����ˡ�\n");
  if ( me->query("class") !="dancer" )
     return notify_fail ("�����������޷�ʹ���߲ʻ��Ρ�\n");

if( me->is_fighting() ) me->start_busy(1); //��ս����ʹ��,Ҫbusy�Լ�һ�غ� by chan

  message_vision ("\n"HIW"$N"NOR"�����Ӱ΢����ҹ������ľ�Ҫ�������ʹ���ռ��貽"HIM"���߲ʻ��Ρ�"NOR"\n",me,target);
  me->add ("force", -50);

       
  message_vision (HIG"ɲʱ��$N�����˱���������ࡣ\n"NOR, me,target);

// �����mark�����dodge_sp ��
  me->set_temp ("rainbow-steps", 1);
   
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),sk*2);

  return 1;
}

void remove_effect (object me)
{
// ɾ�� manashield   
int fun=me->query("functions/rainbow-steps/level");
  me->delete_temp ("rainbow-steps");
  tell_object (me, NOR"�������Լ����������������ˡ�\n"NOR);
  if(fun<100) function_improved("rainbow-steps",random(500)+sk);   
  return;
}
