// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
inherit SSERVER;
void create() {
        
        set_name("赤衣魔将",({"seven-dark"}));
        set("long",
   "\n血气红衣, 霸气不掩, 忠义之心直率的表露于外, 好个魔界汉子。\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","人类");
        set("gender","雄性");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",1500);
        set("max_gin",9000);
        set("max_kee",19000);
        set("max_sen",9000);
        set("max_force",9000);
        set("force",9000);
        set("force_factor",38);
        set("combat_exp",5900000);
        set_skill("blade",120);
        set_skill("dodge",120);
        set_skill("mogi-steps",120);
        set_skill("move",80);
        set_skill("parry",120);
        set_skill("literate",150);
        set_skill("mogi-strike6",150);
        set_skill("force",130);
        set_skill("badforce",90);
        map_skill("blade", "mogi-strike6");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike6");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("clan_kill",1);
        set("limbs",({"头部","胸部","背部","腰部"}));
        setup();
        carry_object("open/mogi/castle/obj/seven1-dark-head");
carry_object(C_OBJ"/ninepill");
        carry_object(C_OBJ"/blade-1")->wield();
        add_money("gold",5);
 }
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,hellfire;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 20)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=offensive_target(mob);
    if(!target) return ;
    hellfire = target->query_condition("hellfire",1);
    if( env == environment(target) )
    {
      message_vision(HIR"\n
炎血之气激出红色的魔雾开始在空气中沸腾，$N的力量随着血气激
增，而$n却被血雾牵制得无法动弹
在$N的力量到达最高点的时候，只听$N大喝‘"HIW"破日天涡太阳断"HIR"’， 
暴走的魔气幻化成血龙奔向$n
\n"NOR,mob,target);
      target->apply_condition("hellfire",hellfire+7);
      target->receive_damage("kee",750);
      COMBAT_D->report_status(target, 1);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}


