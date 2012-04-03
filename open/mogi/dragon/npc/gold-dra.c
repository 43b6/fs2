//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIY"���Դ� ,��������צ��$n�ݺݵ�ץ�˹�ȥ ,��Ҫ˺��$n"NOR"��",
             "dodge"      :  -70,
             "parry"      :  -65,
             "damage"     :  60,
             "damage_type":  "ץ��",
           ]),
([ "action" :"$N"HIY"Ѹ������$n��ǰ ,����צӰ��$n�ͻ���ȥ ,$n������Ѫ�ɽ�"NOR"��
",
             "dodge"      :  -40,
             "parry"      :  -75,
             "damage"     :  70,
             "damage_type":  "ץ��",
            ]),
([ "action" :"$N"HIY"��ȫ������������β�� ,��׼$n���Ϻݺݵ�ɨȥ ,�ò�����"NOR"��
",
             "dodge"      :  -40,
             "parry"      :  -75,
             "damage"     :  70,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIY"��$n��ײ�˹�ȥ ,ǧ���ص����� ,Ю�����֮�� ,���˷�ָ"NOR"��
",
             "dodge"      :  -40,
             "parry"      :  -75,
             "damage"     :  75,
             "damage_type":  "ײ��",
            ]),
([ "action":"$N"HIY"һ����� ,�ӿ������"HIR" ���� "HIY"��$n����������£��ס"NOR
"��",
             "dodge"      : 40,
             "parry"      :  -60,
             "damage"     : 72,
             "damage_type":  "��������",
           ]),
       });

void create()
{
     set_name(HIY"�ƽ����"NOR ,({"golden dragon", "dragon"}) );
     set("race", "Ұ��");
     set("title", "�������ػ���");
     set("age",9972);
     set("long","���������ȵ��ػ��� ,Ϊ�Ϲ�ʱ����ħ��");
     set("attitude","aggressive");
     set_temp("apply/attack",140);
     set_temp("apply/damage",50);
     set_temp("apply/move",70);
     set("max_kee",12000);
     set("kee",12000);
     set("force",9000);
     set("max_force",9000);
     set("force_factor",20);
     set("max_gin", 9000);
     set("max_sen", 9000);
     set("combat_exp",3500000);
     set_skill("dodge",240);
     set_skill("parry",200);
     set_skill("literate",130);
     set_skill("unarmed",200);
 set("limbs", ({ "����", "����", "ǰ֫" , "����" , "��β" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);
}
mapping query_action()

{
   return action[random(sizeof(action))];
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "dragon",environment(ob) );
 if(str=="askgod dragon" || str=="askgod golden dragon"){
 write(HIY"�ƽ�������������ʲ�!?�Ȱ���ɱ������ȥ����!!\n"NOR);
 command("perform fireforce.gold-fire");
 king->kill_ob(who);
 return 1;                                                 
                  }
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
      message_vision(HIY+"�ƽ����"MAG"�ݺݵ�ҧס$N�ľ�����Ѫ!!!\n"+NOR,enemy[i]
);
      enemy[i]->receive_damage("kee", 70,me);
      me->receive_curing("kee",100);
      me->receive_heal("kee",100);
      COMBAT_D->report_status(enemy[i], 1);
     }
   }
   if( me->query("kee") < 0 )
      me->die();
   :: heart_beat();
}

