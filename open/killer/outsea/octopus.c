inherit NPC;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("��צ����",({ "octopus" }) );
        set("long","�����������Ĵ�����!!\n");
        set("race", "Ұ��");
        set("age", 1240);
        set("max_gin", 10000);
        set("max_kee", 10000);
        set("max_sen", 10000);
        set("max_force", 50000);
        set("force", 50000);
        set("force_factor",0);
        set("bellicosity",10000);
        set("limbs", ({"ͷ��", "����"}) );
        set("verbs", ({ "claw","bite" }) );
        set_temp("apply/attack", 100);
        set_temp("apply/damage", 100);
        set_temp("apply/armor",  100);
        set_skill("move",150);
        set_skill("dodge",150);
        set_skill("parry",150);
        set_skill("force",500);
        set("combat_exp", 4000000);
        setup();
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
     && living(enemy[j]) && enemy[j]->query("id")!="octopus" && enemy[j]->query("class")!="killer") 
 mob->kill_ob(enemy[j]);
 }}
  if(random(100) > 65)
 {
 for (j=0 ; j < i ; j++)
 {
 if (enemy[j]->is_character() && !enemy[j]->is_corpse() 
     && living(enemy[j]) && enemy[j]->query("id")!="octopus")
     {   
     message_vision(HIM"$N����צ����Ĵ��ֲ�ס��, �޷�����!!\n"NOR,enemy[j]);
     enemy[j]->start_busy(2);
 }}}   
   set_heart_beat(1);
   ::heart_beat();
   
}