//by roger
inherit NPC;
inherit SSERVER;
#include <ansi.h>
#include "castle.h"
void create()
{
        set("nickname",HIY"流云掩月"NOR);
        set_name("夜无柔", ({"wu-low","ghost"}));        
        set("age",8710);
        set("long","名虽无柔, 容貌却是娇丽婉约, 澈白的肌肤上薄履轻纱, 一举手一投足均是撩人心窝. \n");
        set("title","夜梦双星");
        set("gender","女姓");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("bellicosity",1500);
        set("max_gin",8000);
        set("gin",8000);
        set("max_sen",3000);
        set("sen",8000);
        set("max_kee",13000);
        set("kee",13000);
        set("combat_exp",6300000);
        set("max_force",15000);
        set("force",15000);
        set("force_factor",35);
        set("clan_kill",1);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("mogi-steps",100);
        set_skill("unarmed",100);
        set_skill("mogi-strike8",100);
        set_skill("parry",100);
        set_skill("literate",130);
        set_skill("move",80);
        map_skill("unarmed","mogi-strike8");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike8");
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        add_money("gold",5);
        
}

int accept_fight(object who)
{
return notify_fail("夜无柔说道 : 我没空陪你玩。\n");
}
int accept_kill(object me)
{
    object ob,ghost;
    ob=this_object();
    ghost=present( "mou-houng",environment(ob) );
     if( !present( "mou-houng",environment(ob))||!living(ghost)) return 1;
    else {
    message_vision(HIY"\n夜末虹看到夜无柔有难，马上向$N下了辣手攻击！\n"NOR,me);
     ghost->kill_ob(me);
    return 1;
   }
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,force;
 mapping exit;
 string *exit_name;
 
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
        force = target->query("force");
    if( env == environment(target) )
    {
      message_vision(HIW"
$N步法渐快身影渐散，空气之中香气郁郁，撩人心神。使
出了一式"HIY"‘太阴虚幻宝鉴之  柔之章’"HIW"
$N的一举一动完全牵制住$n的所有动作，$n被困在舞阵之
中动弹不得 
\n"NOR,mob,target);
    
     target->start_busy(3);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}
