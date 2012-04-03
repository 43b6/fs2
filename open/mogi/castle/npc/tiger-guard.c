// by roger

#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
	
	set_name("�׻�����",({"tiger guard","guard"}));
	set("long",
	    "\n�������ذ׻��ҵ�������ħ��\n");

	set("age",3121);
	set("str",35);
	set("cor",35);
	set("race","����");
	set("gender","����");
	set("attitude","peaceful");
	set("class","fighter");
	set("bellicosity",1500);
	set("max_gin",3300);
	set("max_kee",7000);
	set("max_sen",3300);
	set("max_force",7000);
	set("force",5000);
	set("force_factor",20);
	set("combat_exp",3800000);
	set_skill("unarmed",120);
	set_skill("dodge",100);
	set_skill("nine-steps",130);
	set_skill("move",40);
	set_skill("parry",100);
	set_skill("literate",130);
	set_skill("mogi-strike2",120);
	set_skill("force",120);
	set_skill("badforce",120);
	map_skill("unarmed", "mogi-strike2");
	map_skill("dodge","nine-steps");
	map_skill("parry","badstrike");
	map_skill("move","nine-steps");
	map_skill("force","badforce");
	set("limbs",({"ͷ��","�ز�","����","����"}));
	set("verbs",({"bite","claw"}));
	setup();
	carry_object(C_OBJ"/dragon-key");
	carry_object(C_OBJ"/ghost-cloth")->wear();
	carry_object(C_OBJ"/ghost-legging")->wear();
	add_money("gold",15);
 }
int accept_fight(object who)
{
return notify_fail("�׻�����˵�� : ��û�������档\n");
}
int accept_kill(object who)
{
 who=this_player();
 command("hehe "+who->query("id"));
 command("exert roar");
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
	  new("/open/sky/obj7/tiger_order")->move(environment(winner));
	  message_vision(HIM"\n�Ӱ׻����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/tiger_order",sprintf("%s(%s) �ð׻����������˰׻������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj7/tiger_order")->move(environment(winner));
	  message_vision(HIM"\n�Ӱ׻����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/tiger_order",sprintf("%s(%s) �ð׻����������˰׻������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

