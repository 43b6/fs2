inherit NPC;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("水忍",({ "water ninja","water","ninja" }) );
        set("long","利用忍术潜伏在通往东瀛的海域中!!\n");
        set("race", "人类");
        set("age", 30);
        set("class","killer");
        set("max_gin", 5000);
        set("max_kee", 7000);
        set("max_sen", 5000);
        set("max_force", 50000);
        set("force", 50000);
        set("force_factor",10);
        set("bellicosity",10000);
        set_temp("apply/attack", 100);
        set_temp("apply/damage", 100);
        set_temp("apply/armor",  100);
        set_skill("earth-kill",60);
        set_skill("dagger",80);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",200);
        map_skill("dagger","earth-kill");
        set("combat_exp", 5000000);
        setup();
        carry_object("/obj/example/dagger.c")->wield();

}
void heart_beat()
{
 object env,mob,victim,obj;
 mixed enemy;
 int i,hurt,j=0;
 mob = this_object();
 env = environment(mob);
 enemy = all_inventory( environment(mob) );
 i=sizeof(enemy);
 if (!mob->is_fighting() || mob->is_fighting())
 {
 for (j=0 ; j < i ; j++)
 {
 if (!enemy[j]->is_fighting() && enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && living(enemy[j]) && enemy[j]->query("id")!="water ninja" && enemy[j]->query("class")!="killer") 
 mob->kill_ob(enemy[j]);
 }}
  if(random(10) > 4)
 {
 for (j=0 ; j < i ; j++)
 {
 if (enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && living(enemy[j]) && enemy[j]->query("id")!="water ninja")
     {   
     message_vision(HIC"$N受到水忍的水龙术伤害!!\n"NOR,enemy[j]);
     enemy[j]->add("kee",-350);
     COMBAT_D->report_status(enemy[j]);
 }}}   
   set_heart_beat(1);
   ::heart_beat();
   
}