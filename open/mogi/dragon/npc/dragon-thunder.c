//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIW"凶性大发 ,锐利的龙爪向$n狠狠的抓了过去 ,电光滋滋的在$n围绕"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  290,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N"HIW"迅速扑至$n面前 ,龙爪化成一道猛雷朝$n直劈下去 ,$n当场鲜血飞溅"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  280,
             "damage_type":  "抓伤",
            ]),
([ "action" :"$N"HIW"扬起尖角 ,对准$n身上狠狠的刺去 ,狂猛的来势好不吓人"NOR"。",
             "dodge"      :  -30,
             "parry"      :  -25,
             "damage"     :  230,
             "damage_type":  "刺伤",
            ]),
([ "action" :"$N"HIW"朝$n狂抓了过去 ,挟带着闪电的双爪 ,力道之猛 ,令人发指"NOR"。",
             "dodge"      :  -40,
             "parry"      :  -15,
             "damage"     :  245,
             "damage_type":  "抓伤",
            ]),
([ "action":"$N"HIW"狂吼长啸 ,背部射出数道闪光 ,在瞬间$n的身体整个都被吞噬掉"NOR"。",
             "dodge"      : -10,
             "parry"      :  -20,
             "damage"     : 255,
             "damage_type":  "灼伤",
           ]),
       });

void create()
{
     set_name(HIW"雷龙"NOR ,({"thunder dragon", "dragon"}) );
     set("race", "野兽");
     set("title", "守护者");
     set("age",2419);
     set("cor", 30);
     set("long","四条巨龙之末 ,是传说中上古时代的龙族\n");
     set("attitude","aggressive");   
     set_temp("apply/attack",130);
     set_temp("apply/damage",110);
     set_temp("apply/move",70);
     set("max_kee",7200);
     set("kee",7200);
     set("force",4500);
     set("max_force",4500);
     set("force_factor",30);
     set("max_gin", 7000);
     set("max_sen", 7000);
     set("combat_exp",2700000);
     set_skill("dodge",300);
     set_skill("parry",400);
     set_skill("unarmed",200);
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
  message_vision(HIW+"雷龙挟着阵阵电光自云端破雾而出 ,道道光剑自$N穿出!!!\n"+NOR,enemy[i]);
      
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

    new("/open/mogi/dragon/obj/thunder")->move(environment(winner));
    new("/open/mogi/dragon/obj/thunder-1")->move(environment(winner));

    
   tell_object(winner,HIY"\n\n经过一番血战后 ,雷龙终于被你降服了\n"NOR);            
                   
    tell_object(winner,HIC"\n\n雷龙自口中吐出一块宝玉\n\n\n"NOR);            
            destruct(this_object());
                                                                    
            ::die();                                                           
      }                    








