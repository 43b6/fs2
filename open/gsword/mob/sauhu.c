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
	set("guild_master",1);
	set("age",52);
	set("class","swordsman");
	set("title","�ɽ��ɵ��Ĵ��ĵ���");
	create_family("�ɽ���",4,"����");
	set("score",100000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10);
	set_skill("literate",100);
	set_skill("parry",60);
	set_skill("dodge",80);
	set_skill("force",90);
	set_skill("sword",80);
	set_skill("move",40);
	set_skill("array",80);
	set_skill("blade",40);
	set_skill("unarmed",40);
	set_skill("whip",60);
	set_skill("spells",40);
	set_skill("cure",60);
	set_skill("stabber",90);
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	setup();
	carry_object("/u/w/wugi/obj/sword-4")->wield();
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
