//by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;

int kill_him(object);

void create() {
	
	set_name("��������",({"dragon guard","guard"}));
	set("long",
	    "\n�������������ҵ���ħ��\n");

	set("age",3121);
	set("str",35);
	set("cor",35);
	set("race","����");
	set("gender","����");
	set("attitude","peaceful");
	set("bellicosity",3500);
	set("max_gin",3300);
	set("max_kee",9000);
	set("max_sen",3300);
	set("max_force",6500);
	set("force",6500);
	set("force_factor",35);
	set("combat_exp",3500000);
	set_skill("unarmed",120);
	set_skill("literate",130);
	set_skill("blade",100);
	set_skill("dragon-blade",120);
	set_skill("dodge",100);
	set_skill("mogi-strike1",100);
	set_skill("move",50);
	set_skill("parry",100);
	set_skill("hell-evil", 120);
	map_skill("unarmed", "mogi-strike1");
	map_skill("blade","dragon-blade");
	map_skill("dodge","nine-steps");
	map_skill("parry","hell-evil");
	map_skill("move","nine-steps");
	set("limbs",({"ͷ��","�ز�","����","����"}));
	set("verbs",({"bite","claw"}));
	setup();
	carry_object(C_OBJ"/green-blade")->wield();
	carry_object(C_OBJ"/ghost-cloth")->wear();
	carry_object(C_OBJ"/ghost-legging")->wear();
	carry_object(C_OBJ"/tiger-key");
	add_money("gold",20);
 }
int accept_fight(object who)
{
return notify_fail("��������˵�� : ��û�������档\n");
}
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("kill "+who->query("id"));
 return 1;
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
	  new("/open/sky/obj7/dragon_order")->move(environment(winner));
	  message_vision(HIM"\n���������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/dragon_order",sprintf("%s(%s) �������������������������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj7/dragon_order")->move(environment(winner));
	  message_vision(HIM"\n���������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/dragon_order",sprintf("%s(%s) �������������������������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

