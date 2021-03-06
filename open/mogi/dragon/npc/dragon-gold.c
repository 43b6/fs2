//by casey
#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" :"$N"HIY"凶性大发 ,锐利的龙爪向$n狠狠的抓了过去 ,似要撕裂$n"NOR"。",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "抓伤",
           ]),
([ "action" :"$N"HIY"迅速扑至$n面前 ,满天爪影朝$n猛击下去 ,$n当场鲜血飞溅"NOR"。
",
             "dodge"      :  -20,
             "parry"      :  -35,
             "damage"     :  270,
             "damage_type":  "抓伤",
            ]),
([ "action" :"$N"HIY"将全身力量集中在尾巴 ,对准$n身上狠狠的扫去 ,好不惊人"NOR"。
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  240,
             "damage_type":  "内伤",
            ]),
([ "action" :"$N"HIY"朝$n猛撞了过去 ,千斤重的身体 ,挟着万均之势 ,令人发指"NOR"。
",
             "dodge"      :  -30,
             "parry"      :  -35,
             "damage"     :  275,
             "damage_type":  "撞伤",
            ]),
([ "action":"$N"HIY"一声狂吼 ,从口中喷出"HIR" 烈焰 "HIY"将$n的身体整个拢罩住"NOR"。",
             "dodge"      : -30,
             "parry"      :  -30,
             "damage"     : 292,
             "damage_type":  "严重灼伤",
           ]),
       });

void create()
{
     set_name(HIY"黄金甲龙"NOR ,({"golden dragon", "dragon"}) );
     set("race", "野兽");
     set("clan_kill",1);
     set("title", "炎龙谷守护者");
     set("age",103972);
     set("long","原本是整座炎龙谷的守护者 ,上古时代的魔兽 ,但因为
身上似乎有着什么秘密 ,被郑柳两家的人合力擒捕 ,后
来郑雨桥出卖了柳家 ,将它私藏 ,才有这一段恩怨情仇\n");
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
 set("limbs", ({ "龙首", "龙身", "前肢" , "后足" , "龙尾" }) );
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
  message_vision(HIY"\n黄金甲龙"MAG"疯狂的乱窜，四处饥渴的吸食鲜血\n"NOR,me);

  for( i = 0 ; i < sizeof(all) ; i++)
  {
    obj = all[i];
   if( obj->is_character() && !obj->is_corpse() && living(obj)
    && obj->query("id")!="golden dragon")
     {
      message_vision(HIR"\n你被飞溅的血浪震摄住，也受到不小的冲击\n"NOR,obj);
      obj->add("kee",-420);
      obj->start_busy(1);
//     me->start_busy(1);
 
      COMBAT_D->report_status(obj, 1);
     }
   }
 }
 if(count < 20  && me->is_fighting())
  {
  message_vision(HIR"\n黄金甲龙凶性大发，对你"HIR"做出猛烈的攻击\n\n"NOR,me);
  for( i = 0 ; i < sizeof(all) ; i++)
   {
    obj = all[i];
    if( obj->is_character() && !obj->is_corpse() && living(obj)
         && obj->query("id")!="golden dragon")
     {
      me->set("name","("HIR"狂暴"NOR")"HIY"黄金甲龙"NOR);
     for(j=0;j<10;j++)
     {
     message_vision(HIY"$N"HIY"被("HIR"狂暴"NOR")"HIY"黄金甲龙狠狠抓中，满身血痕\n"NOR,obj);
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

      message_vision(HIB"\n黄金甲龙疯狂的撕咬后，渐渐平静下来\n\n"NOR,me);
      me->start_busy(1);
     }
   }
  }


 if( random(10) < 2 )
 {
  if( is_fighting() )
  {
   if( query("kee") < query("eff_kee") )
    message_vision(HIY"\n黄金甲龙身上发出耀眼的光芒，伤口似乎慢慢愈合了\n"NOR,me);
    me->set("name",HIY"黄金甲龙"NOR);
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
    
   tell_object(winner,HIR"\n\n龙的真元缓缓的从尸身上浮起\n\n\n"NOR);            
   winner->set_temp("use_scale_number",15);
  //只能让ko dragon的人 use scale 最多十五次
 if(winner->query("family/family_name")=="仙剑派" && winner->query("killyao")==1 && winner->query("bloodsword")==1)
{
    object ob;
  ob=new("/open/gsword/obj1/heart.c");
   tell_object(winner,HIR"你从甲龙的尸体上割下了一颗血淋淋的心脏.."NOR);
  winner->set_temp("swordheart",1);
    ob->move(winner);

   tell_object(users(),HIR"
黄金甲龙发出异常的哀嚎.....

在一阵骇人哀嚎之后，"HIY"黄金甲龙"HIW"终于惨遭屠戮 . .

魔界渐渐的回复了平静，地上的人们也正为这场胜利欢呼着 !!\n"NOR);
  ::die();
}
else
{
                   
   
   tell_object(users(),HIW"                                                
                                                                            
    勇者"HIB+winner->query("name")+HIW"经过漫长艰辛的浴血之战，终于将"HIY"黄金甲龙"HIW"手刃 . . .        
                                                                            
魔界渐渐的回复了平静，地上的人们也正为这场胜利欢呼着 !!\n"NOR);     
 ::die();
}
                               
}

