inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("�ų���", ({"chen un","un"}));
	set("long","֣ʿ��������,�����ֳ˷�ͬʱ�����ɽ���,�����ڽ�������������
����ڳ˷�,��˵���������,�ɽ����г���������֣ʿ��,�����ܼ�
�����,�ֵ����������ڽ���,�����Ʒ���˫��.����ƽʱ���𿴹�
�ؾ���.\n");
	set("gender","����");
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",43);
	set("class","swordsman");
	set("nickname","����˫��");
	set("title","�ɽ��ɵ��Ĵ�������");
	create_family("�ɽ���",4,"����");
	set("score",100000);
	set("force",1800);
	set("max_force",1800);
	set("force_factor",10);
	set_skill("sword",80);
	set_skill("dodge",80);
        set_skill("shaforce",100);
        set_skill("shasword",70);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("force","shaforce");
	set_skill("move",40);
	set_skill("parry",80);
	set_skill("literate",60);
	set_skill("force",100);
	set_skill("array",90);
	set_skill("blade",40);
	set_skill("unarmed",90);
	set_skill("staff",40);
	set_skill("throwing",40);
	set_skill("cure",40);
        set("str", 30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/open/gsword/obj/sword-2")->wield();
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
  return 1;
  }
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_2"))
	{
	command("say û��ʦ����ͬ��,�Ҳ���������ͽ!");
	return 0;
	}
	command("smile");
	command("say ��Ȼ��ʦ������˼,�Ժ���͸��Һú�ѧ��!");
	command("recruit "+ob->query("id"));
	ob->set("marks/�ɽ�����",1);
	}
