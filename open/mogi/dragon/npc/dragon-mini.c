//by casey
#include <ansi.h>
inherit NPC;
inherit SSERVER;
mapping *action = ({
([ "action" :"$N将锐利的龙爪向$n狠狠的抓了过去"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  220,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N迅速扑至$n面前 ,朝$n猛抓下去"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  170,
             "damage_type":  "抓伤",
            ]),
([ "action" :"$N朝$n身上狠狠的咬去 ,动作快捷狠准"NOR"。",
             "dodge"      :  -30,
             "parry"      :  -25,
             "damage"     :  190,
             "damage_type":  "咬伤",
            ]),
([ "action" :"$N朝$n狂抓了过去 ,使出的力道极其强劲"NOR"。",
             "dodge"      :  -40,
             "parry"      :  -15,
             "damage"     :  175,
             "damage_type":  "抓伤",
            ]),
([ "action":"$N狂吼着 ,朝$n扑去 ,锐利的双爪令人不寒而栗"NOR"。",
             "dodge"      : -10,
             "parry"      :  -20,
             "damage"     : 145,
             "damage_type":  "灼伤",
           ]),
   });


void create()
{
    set_name("幼龙" ,({"little dragon", "dragon"}) );
  set("title", "守护者");
    set("long","看起来是小小的一只龙 ,实际强度却不弱 ,是龙族的后代\n");
  set("race", "野兽");
  set("gender","雄性");
  set("combat_exp",2900000);
  set("age",1021);
  set("cor",32);
  set("str",20);
  set("kee",4900);
  set("max_kee",4900);
  set("sen",2200);
  set("max_sen",2200);
  set("gin",2500);
  set("max_gin",2500);
  set("force",4200);
  set("max_force",4200);
  set("bellicosity",4000);
  set("attitude","aggressive");
  set("chat_chance_combat", 25);
  set_temp("apply/armor",400);
  set_temp("apply/damage",180);
  set("limbs", ({ "龙首", "龙身", "前肢" , "后足" , "龙尾" }) );
  set("force_factor",20);
  set_skill("dodge",300);
  set_skill("parry",300);
  set_skill("unarmed",280);
  set("chat_chance",90);
  set("chat_msg", ({
       (: this_object(),"random_move" :),
  }) );
  setup();
  set("default_actions", (: call_other, __FILE__,"query_action" :));
  set_heart_beat(1);
  add_money("gold",20);

  reset_action();
}
mapping query_action()
{
        return action[random(sizeof(action))];
}
void heart_beat()
{
  object *enemy,me,target,env;
  int i;
  me = this_object();
  env = environment(me);
  enemy = me->query_enemy();
 if( i=sizeof(enemy) ) {
 target=offensive_target(me);
 if(!target) return ;
 if( env == environment(target) ) {
 if( me->is_fighting() )
  {
    if( 80 > random(120) )
    {
 message_vision(MAG+"幼龙往$N身上咬了一口!!!\n"+NOR,target);
  target->receive_damage("kee", 300,me);
 COMBAT_D->report_status(target,0);
     }
   }
   }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}
