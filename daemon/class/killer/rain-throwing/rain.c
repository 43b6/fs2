inherit SSERVER;
#include <ansi.h>
int perform(object me, object target)
{
       string msg;
       int ski_value, kee_lv, bellpower, max_lv;
       ski_value= random(me->query_skill("rain-throwing",1));
       max_lv=me->query_skill("rain-throwing",1);
       bellpower= me->query("bellicosity")/5;
// func_rules By Swy
       if(bellpower > 1000) bellpower=1000;
       kee_lv=me->query_skill("rain-throwing",1)+bellpower;

        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("霸雨式只能对战斗中的对手使用。\n");

        if( me->query_skill_mapped("throwing")!="rain-throwing" )
         return notify_fail("你没有装备霸雨螫魂。 \n");
   if( me->query_skill("rain-throwing",1)<20 )
         return notify_fail("你的霸雨螫魂技巧不足。 \n");
   if( me->query_skill("throwing",1)<10 )
         return notify_fail("你的暗器准度不好。 \n");
   if(me->query("force")<60)
         return notify_fail("你的内力不够。\n");
   if( target->is_busy() )
      return notify_fail(target->name() + "为了躲避你雨般地暗器,目前正自顾不暇!\n");

 msg ="          只见$N身上发出一股强大的杀气,全身发出青淡的光芒。\n
 $N身上青淡的光芒逐渐地延着双臂往双手移去,在双手上形成两团深绿色的光圈。\n
              $N倏地大喝一声～霸雨式～\n\n";

     if( ski_value == random(max_lv)){
     msg += "极端杀招 ‘魔血气杀’\n\n$n遭到前所未有的打击。\n";
     target->add("kee",-250-kee_lv);
     me->add("force",-50);  }
     
    else if( ski_value < 12 ){
      msg +="$N所聚集的杀气不够大,对敌人毫无影响。\n";
      me->add("force",-50); }

    else if( ski_value <  40 ){
     msg += "第一招 ‘杀雨无修’\n\n$n被$N攻了个措手不及,受了一点小伤！\n";
     target->add("kee",-20-kee_lv);
     me->add("force",-50);    }
    
    else if( ski_value <  60 ){
     msg += "第二招 ‘气雨兴锋’\n\n$n被打中不少,受了一些轻伤！\n";
     target->add("kee",-60-kee_lv);
     me->add("force",-50);    }

     else  if( ski_value < 80){
     msg += "第三招 ‘血雨纷飞’\n\n$n被十之八九的光弹所打中,受到严重的创伤。\n";
     target->add("kee",-100-kee_lv);
     me->add("force",-50);  }

    else                    {
     msg += "第四招 ‘魔雨狂殊’\n\n$n无法躲避,被所有的光弹击中,受到无法估计的伤害。\n";
     target->add("kee",-150-kee_lv);
     me->add("force",-50);  }
     message_vision(msg, me, target);
     me->start_busy(1);
        return 1;
}
