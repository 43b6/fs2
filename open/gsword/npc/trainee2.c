inherit NPC;

void create()
{
	set_name("����",({"trainee"}));
	set("long","�ɽ��ɵ��������,�����ڵ���ϰ����.\n");
	set("gender","����");
	set("combat_exp",1659);
        set("attitude","heroism");
	set("age",18);
	set("title","�ɽ��ɵ��������");
	set("class","swordsman");
	set("force",100);
	set("max_force",100);
	set("force_factor",2);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",30);
	set_skill("dodge",30);
	set_skill("parry",30);
	setup();
	carry_object("/open/gsword/obj/sword")->wield();
	carry_object("/open/gsword/obj/suit")->wear();
}
 int accept_fight(object me)
 {
  if((int)me->query("combat_exp")<=3000)
  {
  command("say �㻹������ҹ���,��ȥ�����������");
  return 0;
  }
  command("say ������!");
  return 1;
 }
         
      
