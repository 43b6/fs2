// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
inherit SSERVER;
void create() {
        
        set_name("ī��ħ��",({"seven-dark"}));
        set("long",
   "\n��ҹǭ��, ��ʹ��, ��������ٶ�ǧ��, ҽ�������һ��.\n");

        set("age",3121);
        set("str",35);
        set("cor",35);
        set("race","����");
        set("gender","����");
        set("attitude","aggressive");
        set("class","fighter");
        set("bellicosity",7500);
        set("max_gin",13300);
        set("max_kee",13000);
        set("max_sen",13300);
        set("max_force",15000);
        set("force",15000);
        set("force_factor",50);
        set("combat_exp",6300000);
        set_skill("unarmed",100);
        set_skill("dodge",90);
        set_skill("mogi-steps",80);
        set_skill("move",80);
        set_skill("parry",80);
        set_skill("literate",170);
        set_skill("mogi-strike5",100);
        set("clan_kill",1);
        set_skill("force",120);
        set_skill("badforce",90);
        map_skill("unarmed", "mogi-strike5");
        map_skill("dodge","mogi-steps");
        map_skill("parry","mogi-strike5");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        set("limbs",({"ͷ��","�ز�","����","����","����"}));
        setup();
carry_object(C_OBJ"/ninepill");
        carry_object("open/mogi/castle/obj/seven5-dark-head");

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
 
 if( random(100) < 13)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=offensive_target(this_object());
    if(!target) return;
    if( env == environment(target) )
    {
      message_vision(HIM"\n
һ˲�䣬ħ�����ǣ��ط���ѹ����򣬶����ӵ�����������͸��ħ��֮��
$Nһ���ͺ�"HIW"����������  ����صء�"HIM"����ʱ����ը�ѣ�$n��������
\n"NOR,mob,target);
      target->apply_condition("mogi",5); 
      target->receive_wound("kee",400);
      COMBAT_D->report_status(target, 1);
 log_file("mogi/poison", sprintf("%s(%s) ������֮�� on %s\n"
,target->query("name"),target->query("id"), ctime(time()) ));

    }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/soil_emblem")->move(environment(winner));
	  message_vision(HIM"\n��ī��ħ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/soil_emblem",sprintf("%s(%s) ��ī��ħ����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/soil_emblem")->move(environment(winner));
	  message_vision(HIM"\n��ī��ħ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/soil_emblem",sprintf("%s(%s) ��ī��ħ����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}
