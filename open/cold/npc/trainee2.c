// bandit.c

inherit NPC;

void create()
{
	set_name("ӱ��",({"gere"}));
	set("gender","Ů��");
	set("nickname","��˪����");
	set("per",35);
	set("age",18);
	set("long",
		"���ڶຮ�ȵ����У�������ò������Ϊ��ɫ�ģ���˵õ�����˪���ˡ�֮������\n");
	set("combat_exp",10000);
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
