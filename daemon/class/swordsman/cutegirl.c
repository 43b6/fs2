#include <ansi.h>
inherit NPC;
inherit F_MASTER;
#include <ansi.h>
void create()
{
        set_name("��˫˫", ({"cute girl","girl"}));
        set("long","
��˫˫������ᣬ���������ɰ����ò�����ֱ�������� -- ��
�����ɽ�����֮һ��÷Ӱͬʱ�����ɽ��ɣ����Ժ�÷Ӱ��ͬ��Ϊ
���ÿ��ʡ�������ƺ��е����Ʋ��֣�����΢΢���ǳ��Ӱ��...\n");
        set("gender","Ů��");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",18);
        set("nickname",HIC"����Ū��"NOR);
        set("class","swordsman");
        set("title","�ɽ��ɵ��Ĵ�Ů����");
        create_family("�ɽ���",4,"����");
        set("inquiry",([        
        "�ǳ�" : "��...��ʦ�����Ƚ�ϲ����ʦ��...ֻ��ף��������...\n",
        ]));
        set("sha-stop-6",1);
        set("score",100000);
        set("force",1000);
        set("max_force",1000);
        set("force_factor",10);
        set("max_kee",1200);
        set("kee",1200);
        set("gin",1200);
        set("max_gin",1200);
        set("sen",1200);
        set("max_sen",1200);
        set_skill("array",60);
        set_skill("literate",40);
        set_skill("shasword",80);
        set_skill("shaforce",50);
        set_skill("parry",70);
        set_skill("dodge",80);
        set_skill("sword",70);
        set_skill("move",90);
        set_skill("sha-array",60);     
        set_skill("force",50);
        set_skill("sha-steps",80);
        map_skill("array","sha-array");
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set("str",25);
        set("cor", 30);
        set("per", 40);
        set("int", 40);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-6")->wield();
        add_money("gold",5);
        carry_object("/open/gsword/obj/yuboots")->wear();
        carry_object("/open/gsword/obj/yubracelet")->wear();
        carry_object("/open/gsword/obj/yugem")->wear();
        carry_object("/open/gsword/obj/yucloth")->wear();
        carry_object("/open/gsword/obj/yuskirt")->wear();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=40000)
  {
   command("smile");
   command("say ���ð� !");
   return 0;
  }
  command("say �� ,�Ҿ������ĸ��� !");
  return 1;
  }
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_6"))
        {
        command("say ûʦ����ͬ��,�Ҳ�����������!");
        return 0;
        }
        command("blush");
        command("smile");
        command("say �Ժ��Ҫ�Թ���ʦ���Ļ�� !");
        command("giggle");
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
	  new("/open/sky/obj6/moon_diamond")->move(environment(winner));
	  message_vision(HIM"\n�Ӻ�˫˫�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/moon_diamond",sprintf("%s(%s) �ú�˫˫����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/moon_diamond")->move(environment(winner));
	  message_vision(HIM"\n�Ӻ�˫˫�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/moon_diamond",sprintf("%s(%s) �ú�˫˫����������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

