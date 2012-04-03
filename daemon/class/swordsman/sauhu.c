#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("�Ժ�", ({"sau hu", "hu"}));
        set("long","֣ʿ�����İ�ͽ,�Ժ�ԭ��һ������,���й�����,��23��ʱ�򿼽�ʿ
���,�߶���������,ѧ����֣ʿ��,�Ժ������Ž���,�����ͱ�ʦ��
�Ƕ���,ƽʱ�Ժ׸��𴫵����ǽ���,����ѧʶԨ��,�ɽ��ɵ���������
�����׵�������к���,�ɽ��ɽ�����֮���������ʢ,�Ժ�Ҳ��������.\n");
        set("gender","����");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",52);
        set("class","swordsman");
        set("title","�ɽ��ɵ��Ĵ��ĵ���");
        create_family("�ɽ���",4,"����");
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
        set("sha-stop-4",1);
        set_skill("literate",60);
        set_skill("parry",100);
        set_skill("dodge",60);
        set_skill("shasword",70);
        set_skill("sha-steps",70);
        set_skill("shaforce",80);
        set_skill("sha-array",60);
        set_skill("force",60);
        set_skill("sword",70);
        set_skill("move",70);
        set_skill("array",60);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("array","sha-array");
        set("str",25);
        set("cor", 30);
        set("per", 25);
        set("int", 35);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-4")->wield();
        add_money("gold",5);
}
  int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=60000)
   {
    command("say ���巢��,��֮��ĸ,Ҫ�úð�ϧ��!");
    return 0;
    }
    command("say ��̸���");
    return 1;
    }
void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_4"))
        {
        command("say ûʦ��������,�Ҳ�����������!");
        return 0;
        }
        command("smile");
        command("say ��Ȼ��ʦ������˼,�Ҿ�����Ϊͽ!");
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
	  new("/open/sky/obj6/desert_diamond")->move(environment(winner));
	  message_vision(HIM"\n���Ժ׵����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/desert_diamond",sprintf("%s(%s) ���Ժ׵�����ɳĮ֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/desert_diamond")->move(environment(winner));
	  message_vision(HIM"\n���Ժ׵����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/desert_diamond",sprintf("%s(%s) ���Ժ׵�����ɳĮ֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

