// by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({

([ "action" :"$N"HIG"����һ�� ,ǰצ��$nǿ����ץ�˹�ȥ ,�ۿ����ҵ�һ����Ҫ��$n��"NOR"��",
          
                "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  150,
             "damage_type":  "ץ��",

           ]),
([ "action" :"$N"HIG"Ѹ����$n�ķ�����˹�ȥ ,�ú��صļ׿�ײ����$n ,����������ɳ��"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  150,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIG"���������β�� ,��׼$n���Ϻݺݵ�ɨȥ ,$n���ŵô��ֲ���"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  150,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIG"��$nײ�˹�ȥ ,��ǧ���ص����� ,Ю�����֮�� ,��Ҫ��$nѹ������"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  150,
             "damage_type":  "ײ��",
            ]),
       });

void create()
{
     set_name(HIG"�̹����"NOR ,({"penku turtle", "turtle"}) );
     set("race", "Ұ��");
     set("title", "��������");
     set("no_kill", 1);
     set("no_fight", 1);
     set("age",33972);
     set("long","�������ڿ��еĴ�� ,���� ,�� ,�벢��Ϊ������
�������ƺ�������ɱ���� ,����ʹ������ĵ���...\n");
     set("attitude","peaceful");   
     set_temp("apply/attack",120);
     set_temp("apply/damage",120);
     set_temp("apply/move",170);
     set("max_kee",129000);
     set("kee",129000);
 set("max_gin",120000);
     set("gin",120000);
 set("max_sen",120000);
     set("sen",120000);
     set("force",9000);
     set("max_force",9000);
     set("force_factor",10);
     set("max_gin", 100000);
     set("max_sen", 100000);
     set("combat_exp",3900000);
 set("chat_chance_combat", 25);         
     set_skill("dodge",400);
     set_skill("parry",400);
     set_skill("unarmed",0);
 
 set("limbs", ({ "����", "�긹", "ǰ֫" , "����" , "��β" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);
 add_money("gold",100);                      
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
      message_vision(HIG+"�̹����"HIY"����˿��� ,���������һ����!!!\n"+NOR,enemy[i]);
      me->receive_curing("kee",100000);
      me->receive_heal("kee",100000);
      me->receive_curing("sen",100000);
      me->receive_heal("sen",100000);
      me->receive_curing("gin",100000);
      me->receive_heal("gin",100000);
      me->clear_condition();
      COMBAT_D->report_status(enemy[i], 1);
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}
void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,turtle;
 ob=this_object();
 turtle=present( "turtle",environment(ob) );
 if(str=="askgod turtle" || str=="askgod penku turtle"){
 write(HIC"���������� ,������������\n"NOR);
 return 1;                                                 
                  }
}




