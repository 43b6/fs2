// bandit.c

inherit NPC;

void create()
{
	set_name("Ľ����",({"munlong"}));
	set("gender","Ů��");
	set("nickname","Ľ��С��");
	set("age",17);
	set("long",
		"���Ǻ���һ�ɵ���������е�ٮٮ�ߣ��˳ơ�Ľ��С�ɡ���\n");
	set("combat_exp",10000);
	set("score", 60);
	set("attitude","heroism");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("force",30);
	set("magic",60);
	set_skill("dodge",60);
	setup();
	add_money("silver", 3);
	create_family("��������",5,"����");
}
