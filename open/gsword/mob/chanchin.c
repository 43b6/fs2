inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("½����", ({"chan chin","chin"}));
	set("long","�ɽ���������,���������ң���,����Ϊ������̸�ĺ���,�����ƹ�
������������,�йص����ǵ�ʳ��ס�е�����,�������帺��,���,��
�����ڵĴ�С����,Ҳ��Ϊ���.\n");
	set("gender","����");
	set("combat_exp",500000);
	set("guild_master",1);
        set("attitude","heroism");
	set("age",28);
	set("class","swordsman");
	set("title","�ɽ��ɵ��Ĵ�������");
	create_family("�ɽ���",4,"����");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("literate",60);
	set_skill("parry",70);
	set_skill("dodge",90);
	set_skill("sword",90);
	set_skill("move",100);
	set_skill("force",60);
	set_skill("array",80);
	set_skill("unarmed",40);
	set_skill("spells",60);
	set_skill("magic",60);
	set_skill("dagger",90);
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/u/w/wugi/obj/sword-6")->wield();
	add_money("gold",5);
}

 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=40000)
  {
   command("smile");
   command("say ����Ц��!");
   return 0;
  }
  command("say ����! �������ʶ��ʶ̫������������!");
  return 1;
  }
void attempt_apprentice(object ob)
{
	if(!ob->query_temp("allow_6"))
	{
	command("say ûʦ����ͬ��,�Ҳ�����������!");
	return 0;
	}
	command("smile");
	command("say ��,�ұ�����Ϊͽ!");
	command("recruit "+ob->query("id"));
	ob->set("marks/�ɽ�����",1);
}
