inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("�ų˷�", ({"chen fon","fon"}));
	set("long","֣ʿ����ͽ,�ų˷��ʮ��������������,������������,��ʮ����,
����������֣ʿ��ǲ�����о�̫������,�ɽ����й�ӭ��,�ӿ�,��
ͽ����,���ɳ˷縺��,�˷紦�µ���,��ʶ�㷶,һ��̫��������
����ʦ���,����,�������ŷ���ĩ��.\n");
	set("gender","����");
	set("combat_exp",500000);
        set("attitude","heroism");
	set("guild_master",1);
	set("age",46);
	set("class","swordsman");
	set("nickname","����˫��");
	set("title","�ɽ��ɵ��Ĵ������");
	create_family("�ɽ���",4,"����");
	set("score",100000);
	set("force",1200);
	set("max_force",1200);
	set("force_factor",10);
	set_skill("force",80);
	set_skill("sword",100);
	set_skill("dodge",80);
	set_skill("parry",80);
	set_skill("move",40);
	set_skill("literate",60);
	set_skill("unarmed",60);
	set_skill("blade",40);
	set_skill("staff",90);
	set_skill("array",100);
	set_skill("cure",40);
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
	// carry_object("/u/w/wugi/obj/sword-1")->wield();
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
