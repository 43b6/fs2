#include <ansi.h>
inherit F_SPELL;
int conjure(object me, object target)
{
	
  if (!me->query("spells/manabody/level"))
     return 0;

  if ((int)me->query_temp ("manabody"))
    return notify_fail ("你已经用了云体风身。\n");
        if(me->query("class")!="taoist")
        return 0;
if( me->is_fighting() ) me->start_busy(1);//战斗中busy一回..by Chan
  
  message_vision (HIW"一道气压旋空而起，$N正使出云体风身之术\n\n"NOR,me);
  me->set_temp("manabody",1);
  message_vision ("$N纳气扬声，一声长啸!!将自己的体力提升到了极限!!\n"NOR,me);
  me->add("max_kee",me->query_skill("magic")*10);  
  return 1;
}


