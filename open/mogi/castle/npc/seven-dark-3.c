// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
inherit SSERVER;
void create() {
        
        set_name("蓝衣魔将",({"seven-dark"}));
        set("long",
   "\n湛天蓝衣, 为七人之中最智者, 擅于计谋巧术, 杀人不见血.\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","人类");
        set("gender","雄性");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",1500);
        set("max_gin",13000);
        set("max_kee",13000);
        set("max_sen",13000);
        set("max_force",15000);
        set("force",15000);
        set("force_factor",29);
        set("combat_exp",6200000);
        set_skill("unarmed",100);
        set_skill("dodge",100);
        set_skill("mogi-steps",100);
        set_skill("move",80);
        set_skill("parry",100);
        set_skill("literate",130);
        set_skill("mogi-strike3",100);
        set_skill("force",120);
        set_skill("badforce",90);
        set("clan_kill",1);
        map_skill("unarmed", "mogi-strike3");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike3");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"头部","胸部","背部","腰部"}));
        setup();
        carry_object("open/mogi/castle/obj/seven3-dark-head");
carry_object(C_OBJ"/ninepill");
        add_money("gold",5);
 }
void heart_beat()
{
 object env,mob,*enemy,target;
 int i;

 mob = this_object(); 
 env = environment(mob);  

 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 18)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=offensive_target(mob);
      if(!target) return ;
    if( env == environment(target) )
    {
      message_vision(HIW"\n
$N身形飘忽，发丝在风中飞动，在$n发现的瞬间，一张天罗地网早
已交织在$n的上下 
$N嘴角一扬，一式"HIR"「活杀天罗网”"HIW"开始启动。只见飞发满天，$n犹
如笼中之兽任$N宰割
\n"NOR,mob,target);
      target->receive_damage("kee",650);
      target->start_busy(2);
      COMBAT_D->report_status(target, 1);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}



