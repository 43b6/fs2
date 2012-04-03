
#include <ansi.h>
inherit NPC;
inherit SSERVER;
   
void create()
{
	set("long","
��˵�е�ǧ���󸣬����ס����а���ϳ�����ʳ�����ٳ���������ֻ�޴�Ĺ���
�߶��������߳ߣ�Ƥ���ʴ���ɫ��������һ������������˾�����ë���Ȼ��
���\n
");
	set("race","Ұ��");
set("clan_kill",1);
        set("gender","����");
        set("attitude","aggressive");
        set_name("ǧ����",({"ice-frog","frog"}));
        set("combat_exp",3000000);
        set("bellicosity",3000);
	set("age",10000);
        set("max_force",5500);
        set("force",5500);        
        set("max_kee",6000);
        set("kee",6000);
        set("max_gin",3000);
        set("max_sen",3000);
        set("sen",3000);
        set("gin",3000);
	set("str", 35);
	set("cor", 35);
	set("cps", 30);
	set("per", 30);
	set("int", 30);
        set_skill("dodge",300);
        set_skill("parry",400);
        set_skill("unarmed",350);
        set_temp("apply/armor",100);
        set_temp("apply/damage",80);
        set("limbs",({"ͷ��","�ز�","�����","��ܽ�","����"}));
        set("verbs",({"bite","claw"}));
	setup();
       
}

void heart_beat()
{
 object mob,*enemy,target;
 int i;
 mob=this_object();
 enemy=mob->query_enemy();
 i=sizeof(enemy);
 target=offensive_target(mob);
 if(!target) return ;
        if( random(100) < 15 ){
 message_vision(HIG"\nǧ����������³�һ����������ס$N��ʹ$N����ͷ������\n"NOR,target);
 target->add("eff_kee",-200);
 target->apply_condition("five_poison",random(5)); 
        }
	:: heart_beat();
}	
	   
void die()
{
 object me = query_temp("last_damage_from");
 new("/open/mogi/mountain/obj/frog-pill")->move(environment(me));
 tell_object(me,"ǧ�������Ŀ�Ӷ��ϵ�������\n");
 :: die();
}                    
