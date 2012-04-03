//by casey
#include <ansi.h>
inherit NPC;
inherit SSERVER;
mapping *action = ({
([ "action" :"$N����������צ��$n�ݺݵ�ץ�˹�ȥ"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  220,
             "damage_type":  "ץ��",
           ]),
([ "action" :"$NѸ������$n��ǰ ,��$n��ץ��ȥ"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  170,
             "damage_type":  "ץ��",
            ]),
([ "action" :"$N��$n���Ϻݺݵ�ҧȥ ,������ݺ�׼"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -25,
             "damage"     :  190,
             "damage_type":  "ҧ��",
            ]),
([ "action" :"$N��$n��ץ�˹�ȥ ,ʹ������������ǿ��"NOR"��",
             "dodge"      :  -40,
             "parry"      :  -15,
             "damage"     :  175,
             "damage_type":  "ץ��",
            ]),
([ "action":"$N����� ,��$n��ȥ ,������˫צ���˲�������"NOR"��",
             "dodge"      : -10,
             "parry"      :  -20,
             "damage"     : 145,
             "damage_type":  "����",
           ]),
   });


void create()
{
    set_name("����" ,({"little dragon", "dragon"}) );
  set("title", "�ػ���");
    set("long","��������СС��һֻ�� ,ʵ��ǿ��ȴ���� ,������ĺ��\n");
  set("race", "Ұ��");
  set("gender","����");
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
  set("limbs", ({ "����", "����", "ǰ֫" , "����" , "��β" }) );
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
 message_vision(MAG+"������$N����ҧ��һ��!!!\n"+NOR,target);
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
