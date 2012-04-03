// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
inherit SSERVER;
void create() {
        
        set_name("����ħ��",({"seven-dark"}));
        set("long",
   "\nտ������, Ϊ����֮��������, ���ڼ�ı����, ɱ�˲���Ѫ.\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","����");
        set("gender","����");
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
        set("limbs",({"ͷ��","�ز�","����","����"}));
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
$N����Ʈ������˿�ڷ��зɶ�����$n���ֵ�˲�䣬һ�����޵�����
�ѽ�֯��$n������ 
$N���һ�һʽ"HIR"����ɱ��������"HIW"��ʼ������ֻ���ɷ����죬$n��
������֮����$N�׸�
\n"NOR,mob,target);
      target->receive_damage("kee",650);
      target->start_busy(2);
      COMBAT_D->report_status(target, 1);
    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}



