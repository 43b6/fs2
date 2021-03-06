
// keng_kee.c

#include <ansi.h>
inherit F_FUNCTION;
inherit SSERVER;

int perform(object me, object target)
{
        string msg;
        object ob;
        string *name;

        if( !target ) target = offensive_target(me);

          if(me->query_skill("haoforce",1) < 100 - ( me->query("con") + me->query("cps")*1.2 ) )
             return notify_fail("你的浩日心法不够纯熟，无法聚气指尖。\n");
        if( (string)me->query_skill_mapped("unarmed")!= "lungshan")
                return notify_fail("浩日罡气必须配合泷山绝学才能用。\n");
         
      if(!(ob=me->query_temp("weapon"))) 
        { if(me->query_temp("secondary_weapon"))
          return   notify_fail("不空手怎么发浩日诀?\n");} 
        if(ob=me->query_temp("weapon")) 
        {
         if((string)ob->query("skill_type") != "unarmed") 
            return   notify_fail("不空手怎么发浩日诀?\n");
          }
          if(me->query("force")<250)
                           return notify_fail("你的内力不够。\n");
                  if(me->query("kee")<180)
                           return notify_fail("你的气不够。\n");

        if(!me->is_fighting())  
        {
                tell_object(me,"浩日罡\气唯在战斗中才能使用。\n");
                return 0;
        }
        message_vision(
            "[1m$N口中唸唸有词，运起浩日心法中的「[1;31m烈日诀[0m[1m”\n
               $N霎时一股至阳刚烈的真气充塞着$N身旁只见$N\n
               全身发光炙热，指尖聚集一颗明亮的光球\n\n",me,target);

        {
        message_vision(
            "[1m$N运劲指尖，一道「浩日罡\气”射去！[0m\n",me,target);

            me->add("kee",-50);
                  me->add("force",-(110 - ((int)me->query_skill("haoforce",1)))*3);
        if(random(me->query_skill("unarmed")+20)>random(target->query_skill("dodge")))
        {
                message_vision(
                    "\n$n躲避不及，被罡\气击中，霎时烈火笼罩$n全身，嘶嚎不断！\n",me,target);
                message_vision( NOR,me);
                target->apply_condition("burn",random(10) +((int)me->query_skill("haoforce", 1)/8 ));
                  target->receive_wound("kee",me->query_skill("haoforce",1)*4+random(me->query_skill("haoforce",1)*2));
                COMBAT_D->report_status(target);
        }
        else
      {
                message_vision(
                "$n运功避开，但仍受罡\气擦过，只见$n的伤口焦黑一块。\n",me,target);
                message_vision( NOR,me);
                target->apply_condition("burn",random(10) +((int)me->query_skill("haoforce", 1)/8 ));
                COMBAT_D->report_status(target);
       }
        message_vision(
            "「浩日罡\气”射出后，$N大耗内力、气息紊乱，无法移动\n",me,target);
        me->start_busy(2);
        me->kill_ob(target);
          function_improved("kang_kee",random(me->query("force")/10));
        message_vision( NOR,me);
        return 1;
  }
}
