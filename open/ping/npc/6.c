// ����ɽկ]
#include <ansi.h>
inherit NPC;
void create()
{
         set("title", "����ɽկ��ͷĿ");
         set_name("�װ�", ({"leader ra","ra","leader"}));
         set("age", 45);
         set("long","
�����Ƿ���ɽկ���ϴ�Сʱ����������һ��ѧϰ���գ���Ե�޹�ͻ
Ȼ�뿪�μң���ʧ��һ���ӣ�û�뵽����ʮ���꣬���ڴ˾ݵ�Ϊ����\n");
         set("gender","����");
         set("family/family_name","�μ�");
         set("str",40);
         set("con",30);
         set("cor",30);
         set("cps",30);
         set("bellicosity",7000);
         set("max_kee",12000);
         set("kee",12000);
         set("combat_exp",2500000);
         set("max_force",10000);
         set("force",14000);
         set("force_factor",35);
         set_skill("dodge",95);
         set_skill("force",100);
         set_skill("unarmed",100);
         set_skill("six-fingers",100);
         set_skill("parry",85);
         set_skill("sunforce", 100);
         set_skill("linpo-steps", 65);
         set_skill("literate",100);
         set_skill("move", 65);
         map_skill("unarmed","six-fingers");
         map_skill("force","sunforce");
         map_skill("dodge","linpo-steps");
         map_skill("move","linpo-steps");
         map_skill("parry","six-fingers");
         set("functions/handwriting/level",100);
         set("chat_chance_combat",100);
         set("chat_msg_combat",({
         (: perform_action, "unarmed.handwriting" :),
         }));
         setup();
         add_money("gold", 80);
         carry_object("/open/ping/obj/iceger")->wield();
         carry_object("open/ping/obj/ra-head");
        create_family("�μ�",10,"����");
}
int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("wear armband");
command("perform unarmed.handwriting");
  return 1;
}
int accept_fight(object who)
{
who=this_player();
fight_ob(who);
command("wear armband");
command("perform unarmed.handwriting");
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
	  new("/open/sky/obj1/thunder_emblem")->move(environment(winner));
	  message_vision(HIM"\n���װԵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/thunder_emblem",sprintf("%s(%s) ���װԵ�������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/thunder_emblem")->move(environment(winner));
	  message_vision(HIM"\n���װԵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/thunder_emblem",sprintf("%s(%s) ���װԵ�������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}