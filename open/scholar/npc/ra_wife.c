// ����ɽկ
#include <ansi.h>
inherit NPC;
void create()
{
         set("title", "����ɽկկ������");
         set_name("����", ({"leader en","en","leader"}));
         set("age", 26);
         set("long","
�������װԵ����ӣ��Զ�ʮ�걻�װ�°��֮�󣬱䵱��կ�����ˣ�Ҳ
���װ�ѧ�˵��书�������⼸���У�Ҳ���İ����װԡ�\n");
         set("gender","����");
         set("str",40);
         set("con",30);
         set("cor",30);
         set("cps",30);
         set("int",40);
         set("spi",40);
         set("family/family_name","�μ�");
         set("bellicosity",1000);
         set("max_kee", 7000);
         set("kee", 7000);
         set("combat_exp",1500000);
         set("max_force",3000);
         set("force",3000);
         set("force_factor",25);
         set_skill("dodge",65);
         set_skill("force",90);
         set_skill("stabber",100);
         set_skill("six-fingers",100);
         set_skill("parry",75);
         set_skill("sunforce", 100);
         set_skill("linpo-steps", 45);
         set_skill("literate",120);
         set_skill("move", 45);
         map_skill("stabber","six-fingers");
         map_skill("dodge","linpo-steps");
         map_skill("force","sunforce");
         map_skill("move","linpo-steps");
         map_skill("parry","six-fingers");
         set("functions/handwriting/level",100);
         set("chat_chance_combat",80);
         set("chat_msg_combat",({
         (: perform_action, "stabber.handwriting" :),
         }));
         setup();
         add_money("gold", 30);
         carry_object("/open/scholar/obj/icefan")->wield();
}
int accept_kill(object who)
{
command("perform stabber.handwriting");
  return 1;
}
int accept_fight(object who)
{
command("perform stabber.handwriting");
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
	  new("/open/sky/obj3/soft_feather")->move(environment(winner));
	  message_vision(HIM"\n����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/soft_feather",sprintf("%s(%s) �������������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj3/soft_feather")->move(environment(winner));
	  message_vision(HIM"\n����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/soft_feather",sprintf("%s(%s) �������������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}
