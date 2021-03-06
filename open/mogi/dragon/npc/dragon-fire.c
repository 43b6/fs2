//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIR"凶性大发 ,锐利的龙爪向$n狠狠的抓了过去 ,焰火熊熊的围住$n"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  330,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N"HIR"迅速扑至$n面前 ,满天爪影火光朝$n猛击下去 ,$n当场鲜血飞溅"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  310,
             "damage_type":  "抓伤",
            ]),
([ "action" :"$N"HIR"张开大口 ,对准$n身上狠狠的咬去 ,庞大的身躯好不吓人"NOR"。",
             "dodge"      :  -30,
             "parry"      :  -25,
             "damage"     :  330,
             "damage_type":  "咬伤",
            ]),
([ "action" :"$N"HIR"朝$n狂抓了过去 ,飞舞着火焰的双爪 ,力道之猛 ,令人发指"NOR"。",
             "dodge"      :  -40,
             "parry"      :  -15,
             "damage"     :  325,
             "damage_type":  "抓伤",
            ]),
([ "action":"$N"HIR"狂吼长啸 ,浓浓的火焰 ,在瞬间$n的身体整个都被吞噬掉"NOR"。",
             "dodge"      : -10,
             "parry"      :  -20,
             "damage"     : 315,
             "damage_type":  "灼伤",
           ]),
       });

void create()
{
     set_name(HIR"火龙"NOR ,({"fire dragon", "dragon"}) );
     set("race", "野兽");
     set("title", "守护者");
     set("age",2729);
     set("cor", 30);
     set("long","四条巨龙之首 ,仅次于黄金甲龙 ,是上古时代的龙族\n");
     set("attitude","aggressive");   
     set_temp("apply/attack",130);
     set_temp("apply/damage",110);
     set_temp("apply/move",70);
     set("max_kee",7700);
     set("kee",7700);
     set("force",5000);
     set("max_force",5000);
     set("force_factor",40);
     set("max_gin", 7000);
     set("max_sen", 7000);
     set("combat_exp",2700000);
     set_skill("dodge",400);
     set_skill("parry",420);
     set_skill("unarmed",220);
 set("limbs", ({ "龙首", "龙身", "前肢" , "后足" , "龙尾" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);
 add_money("gold",45);
}
mapping query_action()
{
   return action[random(sizeof(action))];
}

void heart_beat()
{
  object *enemy,me;
  int i;
  me = this_player();
  if( me->is_fighting() )
  {
    if( 80 > random(120) )
    {
      enemy = me->query_enemy();
      i=random(sizeof(enemy));
      message_vision(HIR+"红色的烈焰自火龙口中涌涌而出 ,高温将周遭形成真空漩涡!!\n"+NOR,enemy[i]);
      enemy[i]->receive_damage("kee", 100,me);
      COMBAT_D->report_status(enemy[i], 1);
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}

 void die()                                                                 
{
    object winner = query_temp("last_damage_from");        

    new("/open/mogi/dragon/obj/fire")->move(environment(winner));
    new("/open/mogi/dragon/obj/fire-1")->move(environment(winner));

   tell_object(winner,HIY"\n\n经过一番血战后 ,火龙终于被你收服了\n\n"NOR);            
   tell_object(winner,HIC"\n火龙自口中吐出一块宝玉\n\n\n"NOR);            
                 
               destruct(this_object());
                                                                    
            ::die();                                                           
      }                    








