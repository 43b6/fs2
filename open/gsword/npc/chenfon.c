inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("张乘风", ({"chen fon","fon"}));
	set("long","郑士欣首徒,张乘风二十余年来行侠仗义,早已名满天下,近十余年,
由于掌门人郑士欣遣心于研究太极剑法,仙剑派有关迎宾,接客,收
徒等事,皆由乘风负责,乘风处事得体,见识广范,一手太极剑法已
达宗师火侯,看来,下任掌门非他末属.\n");
	set("gender","男性");
	set("combat_exp",500000);
        set("attitude","heroism");
	set("age",46);
	set("class","swordsman");
	set("nickname","风云双侠");
	set("title","仙剑派第四代大弟子");
	create_family("仙剑派",4,"弟子");
	set("score",100000);
	set("force",1200);
	set("max_force",1200);
        set_skill("shaforce",100);
	set("force_factor",10);
	set_skill("force",80);
        set_skill("sha-steps",80);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("shasword",70);
	set_skill("sword",100);
	set_skill("dodge",80);
	set_skill("parry",80);
	set_skill("move",40);
	set_skill("literate",60);
	set_skill("unarmed",60);
	set_skill("blade",40);
	set_skill("staff",90);
	set_skill("array",100);
        map_skill("sword","shasword");
       map_skill("force","shaforce");
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
	carry_object("/open/gsword/obj/sword-1.c")->wield();
	add_money("gold",5);
}

 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=100000)
  {
  command("say 刀剑无眼,伤了你就不好了");
  return 0;
  }
  command("say 出招吧!");
  return 1;
 }
	void attempt_apprentice(object ob)
	{
	if(!ob->query_temp("allow_1"))
	{
	command("say 师父说过,不能乱收弟子!");
	return 0;
	}
	command("smile");
	command("say 既然师父答应了,我就收你为徒吧!");
	command("recruit "+ob->query("id"));
	ob->set("marks/仙剑七侠",1);
	}
