inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("����", ({"fan son","son"}));
	set("long","֣ʿ��������,ƽʱ����̵����������̫������,����֣ʿ������
�Ѹ�,����ͽ��ͽ�ﲻ�����Խ̵�,�����Ǽ��߻۸�֮��,�����Ե
֮��,֣ʿ���Ż��Լ�ָ��.\n");
	set("gender","����");
	set("guild_master",1);
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",38);
	set("class","swordsman");
	set("title","�ɽ��ɵ��Ĵ�������");
	create_family("�ɽ���",4,"����");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("sword",90);
	set_skill("dodge",70);
	set_skill("parry",100);
	set_skill("literate",40);
	set_skill("move",50);
	set_skill("force",60);
	set_skill("array",90);
	set_skill("blade",90);
	set_skill("unarmed",50);
	set_skill("dagger",40);
        set("str", 30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/u/w/wugi/obj/sword-3.c")->wield();
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
