// bandit.c

inherit NPC;

void create()
{
	set_name("������",({"dragon"}));
	set("gender","Ů��");
	set("age",17);
	set("long",
		"���Ǻ���һ�ɵ����У��书����������ߵľ�����Ů����Ի����������\n");
	set("combat_exp",10000);
	set("score", 60);
	set("attitude","heroism");
	set("unarmed",20);
	set_skill("parry",40);
	set_skill("force",30);
	set_skill("magic",70);
	set_skill("dodge",40);
	setup();
	add_money("silver", 3);
	create_family("��������",5,"����");
}
