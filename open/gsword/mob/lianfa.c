inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("����", ({"lian fa", "fa"}));
	set("long","�ɽ��������������������,���丸����Ǯׯ��ҵ,������С����ĿȻ
,���ڹ���,��Ƶ���Ҳ�ر�����,�ɽ����������ľ�Ӫ֮��,��������
��һ������,Ҳ��һ�����,�ɽ���ƽʱ��������,��֮ɢ��,�ѹ�����
�����Ե�ӵ��,�ټҵ�֧��.\n");
	set("gender","����");
	set("guild_master",1);
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",31);
	set("class","swordsman");
	set("title","�ɽ��ɵ��Ĵ������");
	create_family("�ɽ���",4,"����");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("force",60);
	set_skill("dodge",100);
	set_skill("parry",70);
	set_skill("trade",100);
	set_skill("move",50);
	set_skill("literate",80);
	set_skill("sword",80);
	set_skill("array",80);
	set_skill("blade",40);
	set_skill("unarmed",40);
	set_skill("whip",40);
	set_skill("throwing",90);
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/u/w/wugi/obj/sword-5")->wield();
	add_money("gold",5);
}

  int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=40000)
  {
   command("hmm");
   command("say ���ð�! �һ�ûɱ���˨�,��С��ɱ������ô��?");
   return 0;
  }
  command("say ��! ���Ǿ�������������ҹ!");
  return 1;
}
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_5"))
	{
	command("say ʦ��˵��,Ҫ�յ�����þ�������ͬ��!");
	return 0;
	}
	command("hmm");
	command("say ��Ȼʦ��ͬ����,�Ҿ�����Ϊͽ��!");
	command("recruit "+ob->query("id"));
        ob->set("marks/�ɽ�����",1);
	}
