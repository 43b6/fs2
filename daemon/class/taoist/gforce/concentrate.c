// concentrate.c
// by airke
#include <ansi.h>

int exert(object me, object target)
{
  int mana_gain,forcelost;

  if( target!=me)
       return notify_fail("���������ֻ�������ָ��Լ��ķ�����\n");
  if( me->query("force") < 30 )
       return notify_fail("�������������\n");

	
  mana_gain =me->query_skill("force")*2;
  
//  if( mana_gain + me->query("mana") > me->query("max_mana") )
//       me->set("mana", me->query("max_mana"));
//  else
       me->add("mana", mana_gain);
  
  me->add("force", -30);
  me->receive_damage("sen", 10);

  message_vision(
	HIY "$N��Ŀ���������Ǻ��ķ���ת��һ�Ρ��������...\n"
	HIG"һ��������$N����ɢ���������$P�Ķ��ģ�Ȼ�󻺻���ȥ��\n" NOR, me);
  if( (int)me->query("mana") > (int)me->query("max_mana") * 4) {
   if( (int)me->query("max_mana") >= (int)me->query_skill("spells")*10 ) {
     write("����ķ������ӵ�˲�����Ȼ��������һƬ���ң��ƺ������������Ѿ�����ƿ����\n");
   } else {
     write("���ħ������ˣ�\n");
     me->add("max_mana", 1);
   }
  me->set("mana", me->query("max_mana"));
  }
  if( me->is_fighting() ) me->start_busy(3);

 return 1;
}

