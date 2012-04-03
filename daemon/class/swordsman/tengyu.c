#include <ansi.h>
inherit NPC;
inherit F_MASTER;
#include <ansi.h>
void create()
{
        set_name("����", ({"teng yu","yu"}));
        set("long","
֣ʿ�������ӣ�Ϊ���º��������鱼�ŵ����ȴ���Ʊ��ɽ��ĸ���
�书�����Ѿ�ѧ�����൱�ߵĳ̶ȣ�����ƽ�ո���̵���������ӽ�
����������ȴ�ƺ��е���־�����ƺ�����������ʦ���йء�\n");
        set("gender","����");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",21);
        set("class","swordsman");
        set("nickname",HIW"��������"NOR);
        set("title","�ɽ��ɵ��Ĵ�������");
        create_family("�ɽ���",4,"����");
        set("inquiry",([        
    "÷Ӱ" : "��Ϊʲô���Ͻ�������...�ҵ�����ô����...\n",
    "��˫˫" : "�����ҵĺ�ʦ��...�����Ұ�÷Ӱ����...\n",
        ]));
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
        set("sha-stop-3",1);
        set_skill("sword",90);
        set_skill("dodge",70);
        set_skill("sha-steps",90);
        set_skill("sha-array",80);
        set_skill("shasword",90);
        set_skill("shaforce",60);
        set_skill("parry",90);
        set_skill("literate",40);
        set_skill("move",80);
        set_skill("force",50);
        set_skill("array",70);
        set_skill("unarmed",40);
        map_skill("array","sha-array");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("sword","shasword");
        map_skill("force","shaforce");
        set("str", 30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps", 20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-3.c")->wield();
        carry_object("/open/gsword/obj/yu_cloak")->wear();
        carry_object("/open/gsword/obj/yu-armband")->wear();
        carry_object("/open/gsword/obj/yu-legging")->wear();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=60000)
  {
  command("say �����Ҳ������,���³���̫�ػ�ȡ������");
  return 0;
  }
 command("say ��,��Ҳ�ܾ�û���˼ҹ�����,�ν���!");
  return 1;
  }

int accept_kill(object who)
{
 who = this_player();
 set_skill("shasword",92);
 set("bellicosity",800);
 command("sigh");
 write(HIY"�����������������Ĺ�ʣ��ҽ�һ���־���������ڣ���\n"NOR);
 return 1;
}
         
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_3"))
        {
        command("say ʦ��˵��,Ҫ��ͽ��������ͬ��!");
        return 0;
        }
        command("hmm");
        command("say ��,�Ҿ�����Ϊͽ!");
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
	  new("/open/sky/obj6/sky_diamond")->move(environment(winner));
	  message_vision(HIM"\n�����ڵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/sky_diamond",sprintf("%s(%s) �����ڵ��������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/sky_diamond")->move(environment(winner));
	  message_vision(HIM"\n�����ڵ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/sky_diamond",sprintf("%s(%s) �����ڵ��������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

