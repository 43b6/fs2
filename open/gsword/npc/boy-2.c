inherit NPC;

void create()
{
	set_name("�ɽ��ɵ���������",({"trainee"}));
	set("long","ʮ�����С���� ,�ƺ��յ��ɽ����� .\n");
	set("gender","����");
	set("combat_exp",439);
	set("attitude","friendly");
	set("age",15);
	set("class","swordsman");
	set("str",25);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",10);
	set_skill("dodge",20);
	set_skill("parry",20);
	setup();
	carry_object("/open/gsword/obj/woodsword")->wield();
	carry_object("/open/gsword/obj/suit")->wear();
}
