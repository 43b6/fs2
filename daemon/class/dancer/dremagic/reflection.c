#include <ansi.h>//reflection by cgy
inherit F_SPELL;
inherit SSERVER;
int fun;

void remove_effect (object me);
int conjure(object me, object target)
{
	string msg;
	fun=me->query("spells/reflection/level");
	if (!me->query("spells/reflection/level"))
     return 0;
  if((me->query("family/family_name")!="ҹ��С��")&&(me->query("id")!="cgy"))
     return notify_fail ("ֻ�������������ַ�����\n");
  if (me->query ("atman") < 200)
     return notify_fail ("�����������!\n");
  if ((int)me->query_temp ("ref_shield", 1))
     return notify_fail ("���Ѿ�ʹ����������ˡ�\n");

if( me->is_fighting() ) me->start_busy(1); //��ս����ʹ��,Ҫbusy�Լ�һ�غ� by chan

  msg = HIG "$N����ȫ��������������ǰ����һ����Բ����������$N����ǰ������һ��"NOR;
  msg += HIG "\n���ܱ�����$N��ԭ�������������е�"HIR"�ռ�������"HIC"�����������硱\n"NOR;
  message_vision(msg, me, target);
  me->add ("atman", -200);

       
  message_vision (HIY"$N�е��Լ����������޵еķ�������\n"NOR, me,target);

// �����mark�����ref_shield ��
  me->set_temp ("ref_shield", 1);
  me->start_call_out((: call_other, __FILE__, "remove_effect",me:),fun+20);
  

  return 1;
}

void remove_effect (object me)
{
// ɾ�� manashield   
  int fun=me->query("spells/reflection/level");
  me->delete_temp ("ref_shield");
  tell_object (me,HIW"�������Լ��ķ������½�����ࡣ\n"NOR);
  if(fun<100) spell_improved("reflection",random(300));   
  return;
}
