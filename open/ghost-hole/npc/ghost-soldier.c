inherit NPC;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        object ob;
        set_name("幽冥喽啰", ({ "ghost soldier","soldier","ghost" }) );
        set("long","出没于幽冥道兵率, 在此看守道路。\n");
        set("title",HIB"(魔气)"NOR);
        set("age", 60);
        set("max_gin", 5000);
        set("max_kee", 10000);
        set("max_sen", 5000);
        set("max_force", 5000);
        set("force",5000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",20);
        set("attitude","aggressive");
        set("str", 35);
        set("cor", 35);
        set("spi", 35);
        set("int", 35);
        set("bellicosity",3000);
        set_skill("unarmed",100);
        set_skill("mogi-strike2",100);
        set_skill("mogi-steps",100);
        set_skill("move",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("force",100);
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("unarmed","mogi-strike2");

        set("combat_exp", 3000000);
        set_temp("def_fire",1);
        setup();
}

void heart_beat()
{
 object env,mob,target,obj;
 mixed enemy;
 int i,hurt,j=0;
 mob = this_object();
 env = environment(mob);
 enemy = all_inventory( environment(mob) );
 i=sizeof(enemy);

if(random(10) > 2)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    if (mob->is_fighting())
    {
        message_vision( HIB
        "$N吸取了附近的幽冥魔气，转化为一股能量，瞬间发出！！\n"NOR,mob);
        for (j=0 ; j < i ; j++)
        {
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]->query("id")!="ghost soldier")
        {
        message_vision(HIR"$N被这股魔气团团围住，体力不断的流失！！\n"NOR,(enemy[j]));
        enemy[j]->add("kee",-300);
        COMBAT_D->report_status(enemy[j]);
        }}
 }
 }   
   set_heart_beat(1);
   ::heart_beat();
   
}


