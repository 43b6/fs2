// by roger
#include <ansi.h>
#include "castle.h"
inherit NPC;
void create() {
	
	set_name("������",({"sholo king","king"}));
	set("long",
	    "\n���Ƿ���ħ��������ָһ���Ĵ󽫣����������ƺ����򵥡�\n");

	set("age",3121);
	set("str",35);
	set("cor",35);
	set("race","����");
	set("gender","����");
	set("attitude","peaceful");
	set("class","fighter");
	set("bellicosity",7500);
	set("max_gin",7300);
	set("max_kee",9999);
	set("max_sen",3300);
	set("max_force",9999);
	set("force",9999);
	set("force_factor",60);
	set("combat_exp",8000000);
	set_skill("unarmed",100);
	set_skill("dodge",100);
	set_skill("mogi-steps",100);
	set_skill("move",80);
	set_skill("parry",100);
	set_skill("literate",130);
	set_skill("mogi-strike2",100);
	set_skill("force",120);
	set_skill("badforce",90);
	map_skill("unarmed", "mogi-strike2");
	map_skill("dodge","mogi-steps");
	map_skill("parry","mogi-strike2");
	map_skill("move","mogi-steps");
	map_skill("force","badforce");
	set("limbs",({"ͷ��","�ز�","����","����"}));
	setup();
	carry_object(C_OBJ"/sholo-shield")->wear();
	carry_object(C_OBJ"/sspill");
	add_money("gold",15);
 }

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,king;
 ob=this_object();
 king=present( "king",environment(ob) );
 if(str=="askgod king" || str=="askgod sholo king"){
 write(HIY"��������Ц������ħ���ĵ�������ǰ�����ʲ�!?������ħ������ࡣ��ȥ����!!\n"NOR);
 king->kill_ob(who);
 return 1;						   
		  }
}

int accept_fight(object who)
{
return notify_fail("������˵�� : ��û�������档\n");
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
	  new("/open/sky/obj8/summer_wind")->move(environment(winner));
	  message_vision(HIM"\n������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/summer_wind",sprintf("%s(%s) ����������������׷��� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/summer_wind")->move(environment(winner));
	  message_vision(HIM"\n������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/summer_wind",sprintf("%s(%s) ����������������׷��� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

