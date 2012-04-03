// By Swy 最后修正 QC 98/6/20
// Modify by AceLan 调整命中率 99/04/05
#include <ansi.h>
int perform(object me,object target)
{
   int i;
   object *all = me->query_enemy();
   if(!me->is_fighting())
      return notify_fail("连环计只能在战斗中使用。\n");
   if( me->query("sen") < 30 )
      return notify_fail("你的精神力不够，无法用计。\n");
   if( me->query_skill("plan",1) < 105 )
      return notify_fail("你的谋略能力不够。\n");
   if(all[i]->query_temp("lock-link")==1)
   return notify_fail("此计对同一敌人只能用一次。\n");
   if(all[i]->is_busy())
     return notify_fail("敌人正受你计谋所困,快趁机攻击吧!\n");
   me->add("sen",-20);
// 不是儒门
   if( me->query("family/family_name") != "儒门")
      return notify_fail("不是儒生，不给你用咧！！^_^\n");
    message_vision( HIB + @LONG
$N使用兵法中的铁锁连环计，企图牵制敌人的行动！
LONG + NOR , me , target );
   for( i = 0 ; i < sizeof(all) ; i ++ ) 
   {
         message_vision( CYN + @LONG
$n中了$N的铁锁连环之计，行动被牵制住了！
LONG + NOR , me , all[i] );
         all[i]->start_busy(3);
         all[i]->set_temp("lock-link",1);
}
   me->start_busy(1);
   return 1;
}

