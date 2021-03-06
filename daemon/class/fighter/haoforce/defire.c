// defire.c
// 消除灼伤及寒伤的condition by Chan Design
// 泷山派专用
#include <ansi.h>
int exert(object me)
{
  int need;
  if(me->query_skill("force")/2+me->query_skill("haoforce", 1)<120)
   return notify_fail(HIW"你的浩日内劲练得不够精深，无法调理身上伤势。\n"NOR);
  if( me->is_fighting() )
    return notify_fail(HIW"战斗中没时间调理伤势。\n"NOR);
  if(me->query("family/family_name")!="泷山派")
    return notify_fail(HIW"只有泷山弟子才能调理身上的伤势\n"NOR);
  if( (string)me->query_skill_mapped("force") != "haoforce")
    return notify_fail(HIW"你没有使用浩日心法，要怎么调理伤势呢!!!\n"NOR);
  if((int)me->query("kee")<200 || (int)me->query("sen")<90 )
    return notify_fail("你的气或注意力不够，无法全心调理伤势。\n");
  if((need=me->query_condition("burn")*100)!=0)
  {
     if((int)me->query("force")< need)
      {
       message_vision(
       HIW"$N席地而坐,强行运起浩日心法调理体内炙热气劲!!由于内力不足,造成热劲反扑,反而加重身上的灼伤\n"NOR, me);
       me->add("force",-need);
       me->apply_condition("burn", 15);
       me->add("kee",-200);
       return notify_fail(HIR"你感觉喉头一甜!!!吐了一口鲜血出来!!。\n"NOR);
      }
     message_vision(
     HIW"$N席地而坐,运起浩日心法一股炙热内劲从丹田运至全身,将所受的灼伤完全逼出体外了。\n"NOR, me);
     me->add("force", -need);
     me->apply_condition("burn", 0);
  }
  else if((need=me->query_condition("cold")*130)!=0)
  {
     if((int)me->query("force")< need)
      {
       message_vision(
       HIW"$N席地而坐,强行运起浩日心法调理在体内的雪苍寒劲!!由于内力不足,造成寒伤加速恶化,反而加重身上的寒伤\n"NOR, me);
       me->add("force",-need/2);
       me->apply_condition("cold", 15);
       me->add("kee",-200);
       return notify_fail(HIR"你感觉喉头一甜!!!吐了一口鲜血出来!!。\n"NOR);
      }
     message_vision(
     HIW"$N席地而坐,运起浩日心法一股炙热内劲从丹田运至全身,双手散出丝丝寒气,你将大部份的寒劲逼出体外了。\n"NOR, me);
     me->add("force", -need/2);
     me->apply_condition("cold",0);
  }
 else
    return notify_fail("你并无受寒伤或灼伤,所以不用调理伤势!!!。\n");
    return 1;
}
