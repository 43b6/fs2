#include <ansi.h>

string liyu()
{
if(this_player()->query("liyu")<3)
{
command("say ɶ...��˵ɶ?? ");
}
else
{
command("say ��Ҫ�������?? ....����..����֮ǰ..ʥ���������Ҫ�����������~~");
this_player()->set("liyu",4);
}
}
inherit NPC;

void create()
{
set_name("����¥�� ���� ", ({"starman"}));
        set("long","�ɽ���������֮����ʿ, Ŀǰ��������������.\n");
        set("gender","����");
        set("combat_exp",1300000);
        set("attitude","heroism");
        set("age",31);
        set("class","swordsman");
        set("score",1000);
        set("force",3000);
        set("max_kee",3000);
        set("max_force",3000);
        set("force_factor",10);
        set("str",30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("score", 100000);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("sword",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("shasword",100);
        set_skill("force",80);
        set_skill("shaforce",100);
        set_skill("sha-steps",100);
set("inquiry",([
   
    "�������" : (: liyu :),
]));
        map_skill("dodge","sha-steps");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        map_skill("parry","shasword");

        setup();
        carry_object("/open/gsword/star/obj/sword7")->wield();
        add_money("gold",5);
carry_object("/open/gsword/star/obj/starcloth")->wear();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=300000)
  {
   command("say ����, ������ѽ!");
   return 0;
  }
  command("say С�ĵ����!");
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
	  new("/open/sky/obj5/shue_jade")->move(environment(winner));
	  message_vision(HIM"\n�ӹ��޵����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/shue_jade",sprintf("%s(%s) �ù��޵��������������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj5/shue_jade")->move(environment(winner));
	  message_vision(HIM"\n�ӹ��޵����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/shue_jade",sprintf("%s(%s) �ù��޵��������������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}