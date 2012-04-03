#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
object ob2;
int have_say;
void create()
{
        set_name("�ų���", ({"chen un","un"}));
        set("long","֣ʿ��������,�����ֳ˷�ͬʱ�����ɽ���,�����ڽ�������������
����ڳ˷�,��˵���������,�ɽ����г���������֣ʿ��,�����ܼ�
�����,�ֵ����������ڽ���,�����Ʒ���˫��.����ƽʱ���𿴹�
�ؾ���.\n");
        set("gender","����");
        set("class","swordsman");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",43);
        set("nickname","����˫��");
        set("title","�ɽ��ɵ��Ĵ�������");
        set("kee",1500);
        set("max_kee",1500);
        set("gin",1500);
        set("max_gin",1500);
        set("sen",1500);
        set("max_sen",1500);
        set("force",1800);
        set("max_force",1800);
        set("force_factor",10);
        set("sha-stop-2",1);
        set_skill("array",80);
        set_skill("sha-array",80);
        set_skill("sword",80);
        set_skill("dodge",70);
        set_skill("shaforce",50);
        set_skill("shasword",80);
        set_skill("move",80);
        set_skill("parry",100);
        set_skill("sha-steps",70);        
        set_skill("force",50);
        map_skill("sword","shasword");
        map_skill("array","sha-array");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        set("str", 30);
        set("con", 30);
        set("int",20);
        set("per",40);
        setup();
        carry_object("/open/gsword/obj/sword-2")->wield();
        create_family("�ɽ���",4,"����");
        add_money("gold",5);
}

int accept_fight(object me)
{
  if((int)me->query("combat_exp")<=80000)
  {
  command("say ��������,������Ͳ�����");
  return 0;
  }
  command("say ���а�!");
  ob2=this_player();  
  return 1;
 }

int accept_kill(object me)
{
   ob2=this_player();
   return 1;
 } 

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_2"))
        {
        command("say û��ʦ����ͬ�⣬�Ҳ���������ͽ!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ��ʦ������˼���Ժ���͸��Һú�ѧ��!");
        command("recruit "+ob->query("id"));
        ob->set("marks/�ɽ�����",1);
}

int accept_object(object who,object ob)
{
	if( ob->query("id")!= "pass" )
	{
	write("�ų���˵ ����������ʲô??���� ,������һ�������� ,�һ��ǽ����˰� \n");
	return 0;
	}
	else 
	{
	write("�ų���˵: �������Ѿ��õ����ŵ�����ˣ���ͽ�ȥ�ؾ����!\n");
	write("����.....�һ����������Ƿ񿴴�����...���������һ������书��!\n");
	command("drop pass");
	command("kill "+who->query("id")); 
	have_say=0;
	return 1;
	}
}

void heart_beat()
{
	int kee;
    if(!ob1 || !ob2) return ;
	kee= ob1->query("max_kee");
	if( ob1->query("kee") < 0.4*ob1->query("max_kee") && ob2->query_temp("allow_pass",1) )
	{
        ob1->remove_all_killer();
        if(have_say==0)
        {
        message_vision("�ų���˵: ��һ�¡�����������..............\n",this_object());
	if(!ob2) return ;
        if( ob2->query_temp("allow_pass",1) )
	{
	message_vision("�������ȷ�����ʵ����ϣ����ѧ��֮���ܶ��ɽ���Щ������£�����ɽ����书\n",ob2);
	message_vision("���ˣ�����Խ�ȥ��\n",ob2); 
	have_say=1;
	ob1->set("kee",kee);
	ob1->set("eff_kee",kee);
	ob2->set_temp("allow_read",1);
	}
        }
      } 
	::heart_beat();
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

	if( winner->query_temp("allow_pass",1) )
	{
	write("�ų���˵: �������ȷ�����ʵ����ϣ����ѧ��֮���ܶ��ɽ���Щ������£�����ɽ����书!\n");
	write("���ˣ�����Խ�ȥ��!\n");
	winner->set_temp("allow_read",1);
	}

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/prairie_diamond")->move(environment(winner));
	  message_vision(HIM"\n���ų��Ƶ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/prairie_diamond",sprintf("%s(%s) ���ų��Ƶ����˲�ԭ֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/prairie_diamond")->move(environment(winner));
	  message_vision(HIM"\n���ų��Ƶ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/prairie_diamond",sprintf("%s(%s) ���ų��Ƶ����˲�ԭ֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}  
 
