//by roger
inherit NPC;
inherit SSERVER;
#include <ansi.h>
void create()
{
        set("nickname","��а��������");
        set_name("������", ({"gold-ghost","ghost"}));
        set("age",1100);
        set("long","��а����������֮�ף��д߶�����֮���������\n");
        set("gender","Ů��");
        set("str",30);
        set("con",30);
        set("cor",30);
        set("cps",30);
        set("bellicosity",500);
        set("attitude","aggressive");
        set("max_gin",1100);
        set("gin",1100);
        set("max_sen",1100);
        set("sen",1100);
        set("max_kee",2500);
        set("kee",2500);
        set("combat_exp",1700000);
        set("max_force",3300);
        set("force",3300);
        set("force_factor",10);
        set_skill("dodge",80);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("nine-steps",85);
        set_skill("unarmed",100);
        set_skill("hell-evil",100);
        set_skill("parry",115);
        set_skill("move",100);
        map_skill("unarmed","hell-evil");
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        map_skill("force","badforce");
        map_skill("parry","hell-evil");
  
        set_temp("apply/armor",80);
        set_temp("apply/damage",30);
        setup();
        add_money("gold",25);
        
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
 
if( random(100) < 10 && this_object()->is_fighting())
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=offensive_target(mob);
     if(!target) return ;
    force = target->query("force",1);
    if( env == environment(target) )
    {
      message_vision(HIY"\n�������߶��������󷨣�$N���������������������޷�����!\n"NOR,target);

      target->start_busy(2);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}
