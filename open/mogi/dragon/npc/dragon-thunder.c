//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIW"���Դ� ,��������צ��$n�ݺݵ�ץ�˹�ȥ ,������̵���$nΧ��"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  290,
             "damage_type":  "ץ��",
           ]),
([ "action" :"$N"HIW"Ѹ������$n��ǰ ,��צ����һ�����׳�$nֱ����ȥ ,$n������Ѫ�ɽ�"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  280,
             "damage_type":  "ץ��",
            ]),
([ "action" :"$N"HIW"������ ,��׼$n���ϺݺݵĴ�ȥ ,���͵����ƺò�����"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -25,
             "damage"     :  230,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIW"��$n��ץ�˹�ȥ ,Ю���������˫צ ,����֮�� ,���˷�ָ"NOR"��",
             "dodge"      :  -40,
             "parry"      :  -15,
             "damage"     :  245,
             "damage_type":  "ץ��",
            ]),
([ "action":"$N"HIW"���Х ,��������������� ,��˲��$n�����������������ɵ�"NOR"��",
             "dodge"      : -10,
             "parry"      :  -20,
             "damage"     : 255,
             "damage_type":  "����",
           ]),
       });

void create()
{
     set_name(HIW"����"NOR ,({"thunder dragon", "dragon"}) );
     set("race", "Ұ��");
     set("title", "�ػ���");
     set("age",2419);
     set("cor", 30);
     set("long","��������֮ĩ ,�Ǵ�˵���Ϲ�ʱ��������\n");
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
  message_vision(HIW+"����Ю�����������ƶ�������� ,�����⽣��$N����!!!\n"+NOR,enemy[i]);
      
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

    
   tell_object(winner,HIY"\n\n����һ��Ѫս�� ,�������ڱ��㽵����\n"NOR);            
                   
    tell_object(winner,HIC"\n\n�����Կ����³�һ�鱦��\n\n\n"NOR);            
            destruct(this_object());
                                                                    
            ::die();                                                           
      }                    








