//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIY"���Դ� ,��������צ��$n�ݺݵ�ץ�˹�ȥ ,��Ҫ˺��$n"NOR"��",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "ץ��",
           ]),
([ "action" :"$N"HIY"Ѹ������$n��ǰ ,����צӰ��$n�ͻ���ȥ ,$n������Ѫ�ɽ�"NOR"��
",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "ץ��",
            ]),
([ "action" :"$N"HIY"��ȫ������������β�� ,��׼$n���Ϻݺݵ�ɨȥ ,�ò�����"NOR"��
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  240,
             "damage_type":  "����",
            ]),
([ "action" :"$N"HIY"��$n��ײ�˹�ȥ ,ǧ���ص����� ,Ю�����֮�� ,���˷�ָ"NOR"��
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  275,
             "damage_type":  "ײ��",
            ]),
([ "action":"$N"HIY"һ����� ,�ӿ������"HIR" ���� "HIY"��$n����������£��ס"NOR"��",
             "dodge"      : -30,
             "parry"      :  -30,
             "damage"     : 292,
             "damage_type":  "��������",
           ]),
       });

void create()
{
     set_name(HIY"�ƽ����"NOR ,({"golden dragon", "dragon"}) );
     set("race", "Ұ��");
     set("clan_kill",1);
     set("title", "�������ػ���");
     set("age",103972);
     set("long","ԭ�������������ȵ��ػ��� ,�Ϲ�ʱ����ħ�� ,����Ϊ
�����ƺ�����ʲô���� ,��֣�����ҵ��˺����ܲ� ,��
��֣���ų��������� ,����˽�� ,������һ�ζ�Թ���\n");
     set("attitude","aggressive");   
     set_temp("apply/attack",470);
     set_temp("apply/damage",470);
     set_temp("apply/move",470);
     set("bellicosity",39999);
     set("max_kee",50000);
     set("kee",50000);
     set("force",19000);
     set("max_force",19000);
     set("force_factor",60);
     set("gin", 50000);
     set("sen", 50000);
     set("max_gin", 50000);
     set("max_sen", 50000);
     set("combat_exp",4700000);
     set("chat_chance_combat", 32);
     set_skill("dodge",590);
     set_skill("move", 540);
     set_skill("parry",570);
     set_skill("unarmed",540);
  set("chat_chance",90);                    
  set("chat_msg", ({                        
       (: random_move :),   
  }) );                                     
 set("limbs", ({ "����", "����", "ǰ֫" , "����" , "��β" }) );
     setup();

 set("default_actions", (: call_other, __FILE__,"query_action" :));
         reset_action();
     set_heart_beat(1);
 add_money("gold",100);                      
carry_object("/open/mogi/dragon/obj/scale.c");    
carry_object("/open/mogi/dragon/obj/dragon-head.c");

}
mapping query_action()
{
   return action[random(sizeof(action))];
}

void heart_beat()
{

 mixed all;
 object me,room,obj;
 int maxkee,kee,i,j,count;
 count = random(100);
 me = this_object();
 room = environment(me);
 all = all_inventory(room);
 if(count < 30 && me->is_fighting())
 {
  message_vision(HIY"\n�ƽ����"MAG"�����Ҵܣ��Ĵ����ʵ���ʳ��Ѫ\n"NOR,me);

  for( i = 0 ; i < sizeof(all) ; i++)
  {
    obj = all[i];
   if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="golden dragon")
     {
      message_vision(HIR"\n�㱻�ɽ���Ѫ������ס��Ҳ�ܵ���С�ĳ��\n"NOR,obj);
      obj->add("kee",-420);
      obj->start_busy(1);
//     me->start_busy(1);
 
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if(count < 20  && me->is_fighting())
  {
  message_vision(HIR"\n�ƽ�������Դ󷢣�����"HIR"�������ҵĹ���\n\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
         && obj->query("id")!="golden dragon")
     {
      me->set("name","("HIR"��"NOR")"HIY"�ƽ����"NOR);
     for(j=0;j<10;j++)
     {
     message_vision(HIY"$N"HIY"��("HIR"��"NOR")"HIY"�ƽ�����ݺ�ץ�У�����Ѫ��\n"NOR,obj);
      if (obj->query("class")=="fighter" && obj->query_temp("keeup")==1)
        obj->receive_wound("kee",100+random(300));
      else if ((obj->query("class")=="prayer" && obj->query_temp("hwa_je")==1)
               || (obj->query("class")=="dancer" && obj->query_temp("ref_shield")==1)
               || (obj->query("class")=="dancer" && obj->query_temp("rainbow-steps")==1)
               || (obj->query("class")=="poisoner" && obj->query_temp("snake-steps")==1))
        obj->receive_wound("kee",100+random(200));      
      else
        obj->receive_wound("kee",100+random(100));
      COMBAT_D->report_status(obj, 1);
     }

      message_vision(HIB"\n�ƽ��������˺ҧ�󣬽���ƽ������\n\n"NOR,me);
      me->start_busy(1);
     }
   }
  }


 if( random(10) < 2 )
 {
  if( is_fighting() )
  {
   if( query("kee") < query("eff_kee") )
    message_vision(HIY"\n�ƽ�������Ϸ���ҫ�۵Ĺ�â���˿��ƺ�����������\n"NOR,me);
    me->set("name",HIY"�ƽ����"NOR);
    me->receive_heal("kee",1000);
    me->receive_heal("gin",1000);
    me->receive_heal("sen",1000);
    me->delete_busy();
    me->clear_condition();
  }
  else
  {
   if( query("eff_kee") < query("max_kee") )
    command("exert heal");
    me->add("force",500);
  }
 }
::heart_beat();
  
}

 void die()           
{
    object winner = query_temp("last_damage_from");        

    new("/open/mogi/dragon/obj/power")->move(environment(winner));
    
   tell_object(winner,HIR"\n\n������Ԫ�����Ĵ�ʬ���ϸ���\n\n\n"NOR);            
   winner->set_temp("use_scale_number",15);
  //ֻ����ko dragon���� use scale ���ʮ���
 if(winner->query("family/family_name")=="�ɽ���" && winner->query("killyao")==1 && winner->query("bloodsword")==1)
{
    object ob;
  ob=new("/open/gsword/obj1/heart.c");
   tell_object(winner,HIR"��Ӽ�����ʬ���ϸ�����һ��Ѫ���ܵ�����.."NOR);
  winner->set_temp("swordheart",1);
    ob->move(winner);

   tell_object(users(),HIR"
�ƽ���������쳣�İ���.....

��һ���˰���֮��"HIY"�ƽ����"HIW"���ڲ�����¾ . .

ħ�罥���Ļظ���ƽ�������ϵ�����Ҳ��Ϊ�ⳡʤ�������� !!\n"NOR);
  ::die();
}
else
{
                   
   
   tell_object(users(),HIW"                                                
                                                                            
    ����"HIB+winner->query("name")+HIW"��������������ԡѪ֮ս�����ڽ�"HIY"�ƽ����"HIW"���� . . .        
                                                                            
ħ�罥���Ļظ���ƽ�������ϵ�����Ҳ��Ϊ�ⳡʤ�������� !!\n"NOR);     
 ::die();
}
                               
}

