inherit NPC;

void create()
{
	set_name("����",({"wang fu","wang","fu"}));
	set("long","�㿴������æ��׼����ϯ ,���� , ����Ҫ����ý��� .\n");
	set("title","��������");
	set("gender","����");
	set("combat_exp",3000);
        set("attitude","heroism");
	set("age",38);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("unarmed",40);
	set_skill("dodge",30);
	set_skill("parry",30);
	setup();
	add_money("silver",10);
}
 int accept_kill(object me)
 {
  command("angry "+me->query("id"));
   return notify_fail("������˵�� :Ҫ�����п����� , �Ҿ������� !\n");
  }
 int accept_fight(object me)
 {
   return notify_fail("������˵�� :�Һ�æ , û������������!\n");
 }
