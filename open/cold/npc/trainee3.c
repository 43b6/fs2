// bandit.c

inherit NPC;

void create()
{
	set_name("������",({"show"}));
	set("gender","Ů��");
	set("age",17);
	set("long",
		"�����ɶ���ǰ���˴���ʦѧ�յ������ˣ���Ի�������㡱��\n");
	set("combat_exp",6000);
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
