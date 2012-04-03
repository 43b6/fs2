//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIC"���Դ� ,˫����� ,������ҵ����������$n����Χ��ס"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  290,
             "damage_type":  "����",
           ]),
([ "action" :"$N"HIC"Ѹ������$n��ǰ ,��צ������㳯$nֱץ��ȥ ,$n������Ѫ�ɽ�"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  280,
             "damage_type":  "ץ��",
            ]),
([ "action" :"$N"HIC"���κ�ת ,����һ����Ŀ�糯��$nϮȥ ,���͵����ƺò�����"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -25,
             "damage"     :  260,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIC"��$nֱץ�˹�ȥ ,Ю���ſ������צ�� ,����֮�� ,���˷�ָ"NOR"��",
             "dodge"      :  -40,
             "parry"      :  -15,
             "damage"     :  275,
             "damage_type":  "ץ��",
            ]),
([ "action":"$N"HIC"���Х ,���Ϊ֮ɫ�� ,ǿ������ ,$n�����������������ɵ�"NOR"��",
             "dodge"      : -10,
             "parry"      :  -20,
             "damage"     : 315,
             "damage_type":  "����",
           ]),
       });

void create()
{
     set_name(HIC"����"NOR ,({"wind dragon", "dragon"}) );
     set("race", "Ұ��");
     set("title", "�ػ���");
     set("age",2579);
     set("cor", 30);
     set("long","��������֮һ ,�Ǵ�˵���Ϲ�ʱ��������\n");
     set("attitude","aggressive");   
     set_temp("apply/attack",130);
     set_temp("apply/damage",110);
     set_temp("apply/move",70);
     set("max_kee",7500);
     set("kee",7500);
     set("force",5000);
     set("max_force",5000);
     set("force_factor",37);
     set("max_gin", 7000);
     set("max_sen", 7000);
     set("combat_exp",2700000);
     set_skill("dodge",420);
     set_skill("parry",420);
     set_skill("unarmed",210);
 set("limbs", ({ "����", "����", "ǰ֫" , "����" , "��β" }) );
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

    message_vision(HIC+"��ʿ����� ,�γ������������ ,$N������������!!!\n"NOR,enemy[i]);
      
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

    new("/open/mogi/dragon/obj/wind")->move(environment(winner));
     new("/open/mogi/dragon/obj/wind-1")->move(environment(winner));

   tell_object(winner,HIY"\n\n����һ��Ѫս�� ,�������ڱ��㽵����\n\n"NOR);            
  tell_object(winner,HIC"\n�����Կ����³�һ�鱦��\n\n\n"NOR);                             
               destruct(this_object());
                                                                    
            ::die();                                                           
      }                    













