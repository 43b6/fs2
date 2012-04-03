// by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({

([ "action" :"$N"HIG"����һ�� ,ǰצ��$nǿ����ץ�˹�ȥ ,�ۿ����ҵ�һ����Ҫ��$n��"NOR"��",
          
                "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  220,
             "damage_type":  "ץ��",

           ]),
([ "action" :"$N"HIG"Ѹ����$n�ķ�����˹�ȥ ,�ú��صļ׿�ײ����$n ,����������ɳ��"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  200,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIG"���������β�� ,��׼$n���Ϻݺݵ�ɨȥ ,$n���ŵô��ֲ���"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  210,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIG"��$nײ�˹�ȥ ,��ǧ���ص����� ,Ю�����֮�� ,��Ҫ��$nѹ������"NOR"��",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  220,
             "damage_type":  "ײ��",
            ]),
       });

void create()
{
     set_name(HIG"�̹���ꡮ"HIW"�޿�"HIG"��"NOR ,({"penku turtle", "turtle"}) );
     set("race", "Ұ��");
     set("title", "��������");    
     set("age",33972);
     set("long","�������ڿ��еĴ�� ,���� ,�� ,�벢��Ϊ������
�������Ѿ�ʧȥ���� ,���������൱�Ŀ���\n");
     set("attitude","peaceful");   
     set_temp("apply/attack",120);
     set_temp("apply/damage",120);
     set_temp("apply/move",170);
     set("max_kee",9000);
     set("kee",9000);
 set("max_gin",12000);
     set("gin",12000);
 set("max_sen",12000);
     set("sen",12000);
     set("force",9000);
     set("max_force",7900);
     set("force_factor",20);

     set("combat_exp",3400000);
 set("chat_chance_combat", 25);         
     set_skill("dodge",400);
     set_skill("parry",400);
     set_skill("unarmed",300);
 
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
      message_vision(HIG+"�̹����"HIY"�����һ�� ,������Ѫ����!!!\n"+NOR,enemy[i]);
     enemy[i]->receive_damage("kee", 90,me);
      COMBAT_D->report_status(enemy[i], 1);
     }
   }
// �� casey ͬ������Ϊ AceLan �����й�����ԭ�ϵĲ��� 98.7.16
   if( this_object()->is_fighting()
      && random( 100) > 90)
   {
      new("/u/a/acelan/weapon/turtle_blood")->move( environment());
      message_vision( HIR+"�̹����ͻȻ���ҵĿ���, �ȳ���һЩ�������Ѫ����\n"
+NOR, this_player());
   }
// ����Ϊֹ...
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

 void die()                                                                 
{
    object winner = query_temp("last_damage_from");        

    new("/open/island/obj/power")->move(environment(winner));
    
   tell_object(winner,HIR"\n\n����Ԫ�񻺻��Ĵ�ʬ���ϸ���\n\n\n"NOR);                                
   
  
            ::die();                                                           
      }                                                                     


