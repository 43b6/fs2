// concentrate.c
// by airke
#include <ansi.h>

int exert(object me, object target)
{
  int mana_gain,forcelost;

  if( target!=me)
       return notify_fail("「灵神诀”只能用来恢复自己的法力。\n");
  if( me->query("force") < 30 )
       return notify_fail("你的内力不够。\n");

	
  mana_gain =me->query_skill("force")*2;
  
//  if( mana_gain + me->query("mana") > me->query("max_mana") )
//       me->set("mana", me->query("max_mana"));
//  else
       me->add("mana", mana_gain);
  
  me->add("force", -30);
  me->receive_damage("sen", 10);

  message_vision(
	HIY "$N闭目凝神，用紫星河心法运转了一次「灵神诀”...\n"
	HIG"一股青气从$N身上散出，汇聚在$P的顶心，然后缓缓淡去。\n" NOR, me);
  if( (int)me->query("mana") > (int)me->query("max_mana") * 4) {
   if( (int)me->query("max_mana") >= (int)me->query_skill("spells")*10 ) {
     write("当你的法力增加的瞬间你忽然觉得脑中一片混乱，似乎法力的提升已经到了瓶颈。\n");
   } else {
     write("你的魔力提高了！\n");
     me->add("max_mana", 1);
   }
  me->set("mana", me->query("max_mana"));
  }
  if( me->is_fighting() ) me->start_busy(3);

 return 1;
}

