
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

        if(me->query_skill("dragonfist",1) < 50 )
              return notify_fail("你的降龙绝学不够纯熟，无法聚劲于指\n");
if((string)me->query_skill_mapped("force")!="siseforce")
                return notify_fail("战龙指必须配合洗髓经才能用。\n");
         
      if(!(ob=me->query_temp("weapon"))) 
        { if(me->query_temp("secondary_weapon"))
return notify_fail("要空手才能使用战龙指!!!\n");}
        if(ob=me->query_temp("weapon")) 
        {
if((string)ob->query("skill_type") != "unarmed")
return notify_fail("要空手才能使用战龙指!!!!\n");

          }
          if(me->query("force")<400)
                           return notify_fail("你的内力不够。\n");
                  if(me->query("kee")<200)
                           return notify_fail("你的气不够。\n");

        if(!me->is_fighting())  
        {
                tell_object(me,"战龙指只在战斗中才能使用。\n");
                return 0;
        }
        message_vision(
         HIB"$N忽然气劲暴涨，使出降龙绝学中的"RED"「战龙指”"HIB"只见$N身旁真气怒涛，降龙劲充斥在$N的指上\n"NOR,me,target);
        {
        message_vision(
            HIW"
        $N低吼一声，无形的指劲向$n狂射而出!!\n"
        "
        指劲在半空中暴开，形成天网向$n罩去\n\n"




                              │
                            ┼  ┼
                          ┼      ┼
                  ┬┬┬┼          ┼┬┬┬
                    ┼                  ┼
                      ┼              ┼
                        ┼          ┼
                      ┼              ┼
                    ┼                  ┼
                  ┴┴┴┼          ┼┴┴┴
                          ┼      ┼
                            ┼  ┼
                              │

                              │
                            ┼┼┼
                          ┼┼┼┼┼
                  ┬┬┬┼┼┼┼┼┼┼┬┬┬
                    ┼┼┼┼┼┼┼┼┼┼┼
                      ┼┼┼┼┼┼┼┼┼
                        ┼┼┼┼┼┼┼
                      ┼┼┼┼┼┼┼┼┼
                    ┼┼┼┼┼┼┼┼┼┼┼
                  ┴┴┴┼┼┼┼┼┼┼┴┴┴
                          ┼┼┼┼┼
                            ┼┼┼
                              │
                              │
                            ┼┼┼
                          ┼┼┼┼┼
                  ┬┬┬┼┼┼┼┼┼┼┬┬┬
                    ┼┼┼┼┼┼┼┼┼┼┼
                      ┼┼┼┼┼┼┼┼┼
                        ┼┼┼┼┼┼┼
                      ┼┼┼┼┼┼┼┼┼
                    ┼┼┼┼┼┼┼┼┼┼┼
                  ┴┴┴┼┼┼┼┼┼┼┴┴┴
                          ┼┼┼┼┼
                            ┼┼┼
                              │

               NOR,me,target);
            me->add("kee",-30);
             me->add("force",-(100 - ((int)me->query_skill("dragonforce",1)))*3);
        if(random(me->query_skill("unarmed")+20)>random(target->query_skill("dodge")))
        {
                message_vision(
                 HIR"\n$n躲避不及，指劲击中，霎时$N的内劲在$n身上乱窜，痛苦异常！\n"NOR,me,target);
                message_vision( NOR,me);
                  target->receive_wound("kee",me->query_skill("dragonfist",1)*3+random(me->query_skill("dragonforce",1)*2));
                COMBAT_D->report_status(target);
        }
        else
      {
                message_vision(
                HIW"$n看出气指方向,千均一发一际,躲过‘战龙指’攻击!!\n"NOR,me,target);
                message_vision( NOR,me);
       }
        message_vision(
            "‘战龙指’射出后，$N大耗内劲、运功调息，无法移动\n",me,target);
        me->start_busy(2);
        me->kill_ob(target);
          function_improved("kang_strike",random(me->query("force")/10));
        message_vision( NOR,me);
        return 1;
  }
}
