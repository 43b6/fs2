// concentrate.c
// by airke
#include <ansi.h>

int exert(object me, object target)
{
int atman_gain,forcelost;

  if( target!=me)
       return notify_fail("�����鷨��ֻ�������ָ��Լ���������\n");
  if( me->query("force") < 30 )
       return notify_fail("�������������\n");

	
  atman_gain =me->query_skill("force")*2;
  
//  if( atman_gain + me->query("atman") > me->query("max_atman") )
//       me->set("atman", me->query("max_atman"));
//  else
       me->add("atman",  atman_gain);
  
  me->add("force", -30);
  me->receive_damage("gin", 10);

  message_vision(
	HIY "$N�����������������һ�����������𡸾��鷨��...\n"
        HIR"һ�����������ܵĻ���Ʈ��ɢ���������$N�����飬Ȼ��������ȥ��\n"NOR,me);
  if( (int)me->query("atman") > (int)me->query("max_atman") * 4) {
   if( (int)me->query("max_atman") >= (int)me->query_skill("magic")*10 ) {
     write("������������ӵ�˲�����Ȼ��������һƬ���ң��ƺ������������Ѿ�����ƿ����\n");
   } else {
     write("�����������ˣ�\n");
   }
  me->set("atman", me->query("max_atman"));
  }
  if( me->is_fighting() ) me->start_busy(3);

 return 1;
}

