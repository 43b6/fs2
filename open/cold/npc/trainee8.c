// bandit.c

inherit NPC;

void create()
{
	set_name("�갬",({"drin"}));
	set("age",16);
	set("long",
		"���Ǹ����������ŵ��������ȵ��Ӽ갬\n");
	set("combat_exp",7000);
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
