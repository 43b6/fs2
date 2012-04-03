#include <ansi.h>
#include <command.h>
inherit NPC;
void create()
{
	set_name("��ɽ��",({"girl hwa","girl","hwa"}) );
	set("long","�����������������ӵ���Ů,�����Ȼ��,�����ѵ��˸��洫��");
	set("gender","Ů��");
	set("class","doctor");
	set("combat_exp",700000);
	set("attitude","heroism");
	set("age",21);
	set("str",15);
	set("cor",40);
	set("per",30);
	set("int",30);
	set("force",2500);
	set("max_force",2500);
	set("kee",2000);
	set_skill("literate",70);
	set("max_kee",2000);
	set_skill("cure",70);
	set_skill("dodge",80);
	set_skill("move",60);
	set_skill("parry",70);
	set_skill("stabber",60);
	set_skill("poison",50);
	set_skill("force",50);
	set_skill("yu-needle",80);
	set_skill("seven-steps",90);
	set_skill("godcure",70);
	set_skill("shinnoforce",65);
	map_skill("stabber","yu-needle");
	map_skill("dodge","seven-steps");
	map_skill("parry","yu-needle");
	map_skill("move","seven-steps");
	map_skill("force","shinnoforce");
	map_skill("cure","godcure");
	set("force_factor",10);
	set("chat_chance_combat",50);
	set("functions/break-kee/level",40);
	set("chat_msg_combat",({
	(: perform_action("stabber.break-kee") :),
	}));
	setup();
	carry_object("/open/doctor/obj/needle7.c")->wield();
	add_money("gold",10);
}

void greeting(object ob)
{
	if( (string)ob->query("class") == "poisoner" )
{
	command("say �常˵����ħ�����˸�ɱ����,�������ɣ�");
	kill_ob(ob);
}
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
	  new("/open/sky/obj8/spring_wind")->move(environment(winner));
	  message_vision(HIM"\n�ӻ�ɽ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/spring_wind",sprintf("%s(%s) �û�ɽ�������˴������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/spring_wind")->move(environment(winner));
	  message_vision(HIM"\n�ӻ�ɽ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/spring_wind",sprintf("%s(%s) �û�ɽ�������˴������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}



