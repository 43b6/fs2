inherit NPC;

void create()
{
	set_name("�صʿ", ({"swordsman"}));
	set("long","�ɽ����صʿ,������������վ������.\n");
	set("gender","����");
	set("combat_exp",12775);
        set("attitude","heroism");
	set("age",31);
	set("class","swordsman");
	set("score",1000);
	set("force",300);
	set("max_force",300);
	set("force_factor",4);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	setup();
	carry_object("/obj/longsword.c")->wield();
}
 int accept_fight(object me)
  {
  if((int)me->query("combat_exp")<=2000)
  {
   command("say ȥ���������!");
   return 0;
  }
  command("say ������!");
  return 1;
  }
         
      
