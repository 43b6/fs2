inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("小火龙", ({ "small dragon","dragon","small" }) );
        set("long",
                "幼小的火龙, 虽然幼小, 但是其气魄已经十分惊人。\n");
        set("race", "野兽");
        set("age", 100);
        set("attitude", "friendly");
        set("family/family_name","火龙窟");
        set("max_gin", 100000);
        set("max_kee", 100000);
        set("max_sen", 100000);
        set("max_force", 100000);
        set("force", 100000);
        set("force_factor",20);
        set("str", 99);
        set("cor", 99);
        set("spi", 99);
        set("int", 99);
        set("bellicosity",10000);
        set("limbs", ({ "头部", "身体", "前爪", "后爪", "尾巴" }) );
        set("verbs", ({ "bite", "claw" }) );
        set_temp("apply/attack", 100);
        set_temp("apply/damage", 100);
        set_temp("apply/armor",  200);
        set("combat_exp", 10000000);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",350);
        set_temp("kang-power",1);
        set_temp("def_fire",1);
        set_temp("todie",3);
        setup();
}
void heart_beat()
{
 object env,mob,target,obj;
 mixed enemy;
 int i,hurt,j=0,defire;
 mob = this_object();
 env = environment(mob);
 if( query("kee") < 0)
{mob->die();
 return ;
}
 if(mob->query("kee") < mob->query("max_kee") && mob->query("force") < 100000)
 {
    mob->receive_curing("kee",500);
    mob->clear_condition();
    mob->receive_heal("kee",500);
    mob->add("force",5000);
 }
 if(random(10) > 5)
 {
    enemy = all_inventory( environment(mob) );
    i=sizeof(enemy);
    target=enemy[random(i)];
    if(mob->is_fighting())
    {
        message_vision( HIR
        "\n小火龙从口中狂喷出火焰!!\n"NOR,mob);
        mob->delete_busy();
        mob->apply_condition("burn", 0);
        for (j=0 ; j < i ; j++)
        {
        if(enemy[j]){	
        if( enemy[j]->is_character() && !enemy[j]->is_corpse() && living(enemy[j])
            && enemy[j]->query("id")!="small dragon"
            && environment(this_object())==environment(enemy[j]))
        {
        hurt = 2000+random(1000);
        if(!enemy[j]->query("ring_type"))
        defire=500;
        else if(enemy[j]->query("ring_type")==1)
        defire=600;
        else if(enemy[j]->query("ring_type")==2)
        defire=700;
        else if(enemy[j]->query("ring_type")==3)
        defire=800;
        else if(enemy[j]->query("ring_type")==4)
        defire=900;
        else if(enemy[j]->query("ring_type")==5)
        defire=1000;
        if (enemy[j]->query("class")=="fighter" && enemy[j]->query_temp("keeup")==1)
        hurt= 2000+random(2000);       
        if (enemy[j]->query("class")=="scholar" && enemy[j]->query("class")=="poisoner" && enemy[j]->query_temp("def_fire")!=1)
        {hurt = 1700+random(1000);
        tell_object (enemy[j],HIG"你凭着你的机制躲过了小火龙的火焰!!\n"NOR);}
        if (enemy[j]->query_temp("def_fire")==1        //增加火龙鳞与焰气诀加乘效果
        && enemy[j]->query_temp("def_fire1")==1)           
        {hurt = hurt - defire - 700;}
        else if (enemy[j]->query_temp("def_fire")==1 ||          
        enemy[j]->query_temp("def_fire1")==1)
        {hurt = hurt - 1000;}
        else if (enemy[j]->query_temp("gold-fire")==1 &&   //增加极火金身也可以挡掉500点功击
        enemy[j]->query("functions/gold-fire/level","gold-fire") == 90)
        {hurt = hurt -500;}       
        enemy[j]->add("kee",-hurt);
        enemy[j]->apply_condition("burn",30);
        COMBAT_D->report_status(enemy[j]);
        }}}
 }
 }   
   set_heart_beat(1);
   ::heart_beat();
   
}
void die()
{
   int i,j=0;
   object *enemy,mob,me;
   me = this_player();
   mob = this_object();
   enemy = mob->query_enemy();
   i=sizeof(enemy);
        for (j=0 ; j < i ; j++)
        {
	if(enemy[j]){
        if(environment(this_object())==environment(enemy[j]) && userp(enemy[j])){
        enemy[j]->set_temp("ko_g",1);   
        if(enemy[j]->query("combat_exp") < 10000000){ 
          tell_object(enemy[j],HIY"\n由于你的努力, 终于打倒了小火龙, 你辛苦的代价换来了宝贵的经验!!\n"NOR);
          tell_object(enemy[j],HIC"你的战斗经验上升 2000 点, 潜在能力上升 500 点!!\n"NOR);
          enemy[j]->add("combat_exp",2000);
          enemy[j]->add("potential",500);
	  }
        }}}
   ::die();

}
