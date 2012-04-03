// ����ɽկ
#include <ansi.h>
inherit NPC;
void create()
{
         set("title", "����ɽկ��ͷĿ");
         set_name("�ż�", ({"leader zhang","zhang","leader"}));
         set("age", 35);
         set("long","����ɽկ��ͷĿ֮һ����С�͸����װԴ���������\n");
         set("gender","����");
         set("str",30);
         set("con",30);
         set("cor",30);
         set("cps",30);
         set("max_kee", 7500);
         set("kee", 8500);
         set("combat_exp",1400000);
         set("max_force",6000);
         set("force",6000);
         set("force_factor",20);
         set_skill("dodge",85);
         set_skill("parry",85);
         set_skill("force",100);
         set_skill("unarmed",100);
         set_skill("snow-martial",100);
         set_skill("snowforce", 100);
         set_skill("black-steps", 85);
         map_skill("unarmed","snow-martial");
         map_skill("dodge","black-steps");
         map_skill("parry","snow-martial");
         setup();
         add_money("gold", 10);
         carry_object("/open/ping/obj/gold_hand")->wear();
         carry_object("open/ping/npc/zhang-z-head");
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
	  new("/log/sky/thunder_feather")->move(environment(winner));
	  message_vision(HIM"\n���ż̵����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/u/n/neverend/log/thunder_feather",sprintf("%s(%s) ���ż̵�������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/log/sky/thunder_feather")->move(environment(winner));
	  message_vision(HIM"\n���ż̵����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/u/n/neverend/log/thunder_feather",sprintf("%s(%s) ���ż̵�������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}