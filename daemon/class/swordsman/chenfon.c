#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("�ų˷�", ({"chen fon","fon"}));
        set("long","֣ʿ����ͽ,�ų˷��ʮ��������������,������������,��ʮ����,
����������֣ʿ��ǲ�����о��ɽ�����,�ɽ����й�ӭ��,�ӿ�,��
ͽ����,���ɳ˷縺��,�˷紦�µ���,��ʶ�㷶,һ���ɽ�������
����ʦ���,����,�������ŷ���ĩ��.\n");
        set("gender","����");
        set("combat_exp",500000);
        set("attitude","heroism");
        set("age",46);
        set("class","swordsman");
        set("nickname","����˫��");
        set("title","�ɽ��ɵ��Ĵ������");
        create_family("�ɽ���",4,"����");
        set("score",100000);
        set("sha-stop-1",1);
        set("force",1200);
        set("max_force",1200);
        set("force_factor",10);
        set("kee",1500);
        set("max_kee",1500);
        set("gin",1500);
        set("max_gin",1500);
        set("sen",1500);
        set("max_sen",1500);
        set_skill("sha-array",80);
        set_skill("shaforce",50);       
        set_skill("force",50);
        set_skill("sha-steps",80);
        set_skill("cure",40);
        set_skill("shasword",85);
        set_skill("sword",90);
        set_skill("dodge",80);
        set_skill("parry",100);
        set_skill("move",80);
        set_skill("array",80);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        map_skill("array","sha-array");
        map_skill("sword","shasword");
        map_skill("force","shaforce");
        set("str", 30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        setup();
        carry_object("/open/gsword/obj/sword-1.c")->wield();
        carry_object("/open/gsword/obj/nine_hat.c")->wear();
        add_money("gold",5);
}

 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=100000)
  {
  command("say ��������,������Ͳ�����");
  return 0;
  }
  command("say ���а�!");
  return 1;
 }
        void attempt_apprentice(object ob)
        {
        if(!ob->query_temp("allow_1"))
        {
        command("say ʦ��˵��,�������յ���!");
        return 0;
        }
        command("smile");
        command("say ��Ȼʦ����Ӧ��,�Ҿ�����Ϊͽ��!");
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
	  new("/open/sky/obj6/sun_diamond")->move(environment(winner));
	  message_vision(HIM"\n���ų˷�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/sun_diamond",sprintf("%s(%s) ���ų˷������̫��֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/sun_diamond")->move(environment(winner));
	  message_vision(HIM"\n���ų˷�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/sun_diamond",sprintf("%s(%s) ���ų˷������̫��֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
   ::die();
}

