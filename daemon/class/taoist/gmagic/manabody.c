#include <ansi.h>
inherit F_SPELL;
int conjure(object me, object target)
{
	
  if (!me->query("spells/manabody/level"))
     return 0;

  if ((int)me->query_temp ("manabody"))
    return notify_fail ("���Ѿ������������\n");
        if(me->query("class")!="taoist")
        return 0;
if( me->is_fighting() ) me->start_busy(1);//ս����busyһ��..by Chan
  
  message_vision (HIW"һ����ѹ���ն���$N��ʹ���������֮��\n\n"NOR,me);
  me->set_temp("manabody",1);
  message_vision ("$N����������һ����Х!!���Լ��������������˼���!!\n"NOR,me);
  me->add("max_kee",me->query_skill("magic")*10);  
  return 1;
}


