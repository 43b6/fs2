#include <ansi.h>
inherit NPC;
void create()
{
         set("title", "����ɽկ��ͷĿ");
         set_name("����", ({"leader liu","liu","leader"}));
         set("age", 40);
         set("long",@LONG

ɽկ�Ķ�ͷĿ��Ҳ���װ���ߵľ�ʦ�������Ӻ��˵ĵ��ӡ�
LONG
);
         set("gender","����");
         set("race","����");
         set("str",30);
         set("con",30);
         set("cor",30);
         set("cps",30);
         set("max_kee", 9000);
         set("kee", 9000);
         set("combat_exp",1700000);
         set("max_force",6000);
         set("force",6000);
         set("force_factor",25);
         set_skill("dodge",85);
         set_skill("parry",85);
         set_skill("force",100);
         set_skill("unarmed",120);
         set_skill("lungshan",120);
         set_skill("haoforce", 100);
         set_skill("henma-steps", 85);
         map_skill("unarmed","lungshan");
         map_skill("parry","lungshan");
         map_skill("dodge","henma-steps");
         setup();
         add_money("gold", 30);
         carry_object("/open/ping/obj/chilin_legging")->wear();
         carry_object("open/ping/obj/liu-head");
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
	  new("/open/sky/obj3/wind_feather")->move(environment(winner));
	  message_vision(HIM"\n�����ŵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/wind_feather",sprintf("%s(%s) �����ŵ����˷�֮Ʈ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj3/wind_feather")->move(environment(winner));
	  message_vision(HIM"\n�����ŵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/wind_feather",sprintf("%s(%s) �����ŵ����˷�֮Ʈ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}