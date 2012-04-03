#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("��ƽ",({"cmatetwo"}));
	set("long","���Ǵ�ѩկ��������ƽ��\n");
	set("gender","����");
	set("combat_exp",68262);
	set("attitude","heroism");
	set("age",41);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
	set("force",1200);
	set("max_force",1200);
	set("bellicosity",10000);
	set("force_factor",10);
	set_skill("dodge",60);
	set_skill("sword",60);
	set_skill("force",80);
	set("immortal",1);
        setup();
        carry_object(SNOW_OBJ"honsword")->wield();
	create_family("ѩ����",5,"����");
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
	  new("/open/sky/obj4/com_shells")->move(environment(winner));
	  message_vision(HIM"\n����ƽ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/com_shells",sprintf("%s(%s) ����ƽ�����˰���֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj4/com_shells")->move(environment(winner));
	  message_vision(HIM"\n����ƽ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/com_shells",sprintf("%s(%s) ����ƽ�����˰���֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}