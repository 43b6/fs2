// bandit.c

inherit NPC;

void create()
{
	set_name("���",({"fall"}));
	set("gender","Ů��");
	set("age",15);
	set("long",
		"��������һ���������ɰ��д���һ���������������ֽ������\n");
	set("combat_exp",8000);
	set("score", 60);
	set("attitude","heroism");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("force",30);
	set_skill("magic",40);
	set_skill("dodge",60);
	setup();
	add_money("silver", 3);
	create_family("��������",5,"����");
}
