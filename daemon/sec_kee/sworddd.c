#include <combat.h>
#include <ansi.h>
inherit SSERVER;
int kee_out(object me,object target)
{
int msk=me->query("max_s_kee",1);
if(msk > 500) msk=500;
     if(me->query("s_kee")*5<me->query("max_s_kee"))
      {
          tell_object(me,"你的灵气不够。\n");
          return 1;
      }
 if(!me->is_fighting())
  return notify_fail("战斗中才能使用无极剑气!!!。\n");
 if(!target->is_fighting())
  return notify_fail("对方并不是在处于战斗之中，所以无法使用无极剑气!!!\n");
  message_vision(
     HIG + "$N大喝一声，爆出身上无极剑气，只见无数剑芒由$N身上射出！\n" NOR,me);
       message_vision(  CYN "面对突如其来的剑阵，$N眼前一愣..已遭无数剑芒贯体而过。\n" NOR,target);
       target->receive_damage("kee",2*me->query("max_s_kee"));
      COMBAT_D->report_status(target);
      me->set("s_kee",0);
      me->kill_ob(target);
      return 1;
}
