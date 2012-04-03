#include <ansi.h>
inherit NPC;
#include "/open/open.h"
#include <ansi.h>
inherit F_MASTER;
string ask_moon();

void create()
{
        set_name("����ң",({"shou yau","yau"}));
 set("long","
֣ʿ���ĵ��߸�ͽ�ܣ����ɽ������У������������Ǽ�����������֮
������ߣ���˵��ʵ���书�������ʦ���ų˷�֮�ϣ�����ң���Բ�
��С�ڣ����ô򱧲�ƽ�����������̽������ڽ�����Ҳ��С��������
�������ɽ������ɽ������ˡ�\n");
        set("gender","����");
        set("nickname",HIY"���Ǵ���"NOR);
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",21);
        set("class","swordsman");
        set("title","�ɽ��ɵ��Ĵ��ߵ���");
        set("score",100000);
        set("kee",1500);
        set("max_kee",1500);
        set("gin",1500);
        set("max_gin",1500);
        set("sen",1500);
        set("max_sen",1500);
        set("force",1000);
        set("max_force",1000);
        set("force_factor",10);
        set_skill("sword",80);
        set_skill("force",50);
        set_skill("sha-array",90);       
        set_skill("shasword",80);
        set_skill("shaforce",50);
        set_skill("array",90);
        set_skill("parry",80);
        set_skill("dodge",70);
        set_skill("move",70);
        set_skill("spells",50);
        set_skill("sha-steps",70);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set("str", 30);
        set("cor", 30);
        set("per", 30);
        set("int", 30);
        set("cps", 30);
        set("con", 30);
        set("spi", 30);
        set("kar", 30);
        set("inquiry",([
        "�ɽ�����" : "�ɽ�����ֺü��֣���������һ�֣�",
        "���ǽ���" : "���ǽ��������У���������ޱ���͡����������졯",
        "���Ž���" : "���Ž����С��۹�������������һ�С��������С����Ҳ����ģ���ȥ�������˰�",
        "�����ߴ����" : "�С��Ľ��˴����Ϊ���õģ����С��������¡����У�ͬ��Ҳ�����޷�����",
        "������������" : "ֻ��һ�С����������߾�ն������ֻ������һ�룬�����������������",
            "�°���"  :  (: ask_moon :),
                      ]));
        setup();
        carry_object("/open/gsword/obj/sword-7")->wield();
        carry_object("/open/gsword/obj/white_cloth")->wear();
        carry_object("/open/gsword/obj/yau_glove")->wear();
        create_family("�ɽ���",4,"����");
}
 int accept_fight(object me)
 {
 if((int)me->query("combat_exp")<=80000)
 {
  command(":P");
  command("say ������,�����Ǻܿɹ��,��ú���ϧ!");
  return 0;
 }
 command(":D");
 command("say �þ�û����������,������!");
  return 1;
 }
string ask_moon()
{
    if(!this_player()->query_temp("ask_moon4"))
        return "��....���ҿɲ��������������ʱ��˰ɡ�";
        command("say �ǻ���Ҫ�������ҵ� ?");
        command("sigh");
        this_player()->set_temp("ask_moon5",1);
        return "�Դӻ����Ծ��µ���вʹ���뿪���Ҿ���Ҳû��������,���������������ཻ���������ȥ�ʿ���...";      
}         
void attempt_apprentice(object ob)
  {
        if(!ob->query_temp("allow_7"))
        {
        command("say ��С��,���۹�! ..���� ...");
        command("say ʦ��˵��,��������ͽ��!");
        command("shrug");
        return 0;
        }
  command("giggle");
 command("say �����ҾͶ���!");
 command("say �Ժ��Ҫ����ѧ�!");
  command("recruit "+ob->query("id"));
  ob->set("marks/�ɽ�����",1);
  }

void die()
{
	object head,winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }

	if(winner->query_temp("head") == 3 )
	{//Ҫ��������ְ����ң�һ��Ҫ�Լ�ɱ������֮һ
	//��������head 4����������ڽ������ְ����ң��������õ���ͷ
	message_vision(HIY"�ɶ񣡾�Ȼ������������,�������ֽ���һ���ȷ�Ѫ��\n"NOR,this_object());
	message_vision("˵��֮�����͵����ˡ�������\n",this_object());
	winner->set_temp("head",4);
	head=new("/open/killer/headkill/obj/sword_head.c");
	head->move(this_object());
	}
	if ((winner->query("class") == "killer") && (winner->query_temp("head") != 4))
	{//���������������γ�������Ϊ��headkill֮�յ�һ����ɱ�֣�
	//�뽫���ӵ���ͷ����ɱ�������У�������ɱ���������ӣ�����Եõ���ͷ
	//������Ϊ�����ڽ������ְ�����Բ������趨����ֵ
	message_vision(HIY"�ɶ񣡾�Ȼ������������,�������ֽ���һ���ȷ�Ѫ��\n"NOR,this_object());
	message_vision("˵��֮�����͵����ˡ�������\n",this_object());
	head=new("/open/killer/headkill/obj/sword_head.c");
	head->move(this_object());
	}

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/meteor_diamond")->move(environment(winner));
	  message_vision(HIM"\n������ң�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/meteor_diamond",sprintf("%s(%s) ������ң����������֮˲���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/meteor_diamond")->move(environment(winner));
	  message_vision(HIM"\n������ң�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/meteor_diamond",sprintf("%s(%s) ������ң����������֮˲���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

