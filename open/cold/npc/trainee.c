// bandit.c

inherit NPC;

void create()
{
	set_name("Сʫ",({"poet"}));
	set("gender","Ů��");
	set("nickname","��������");
	set("age",14);
	set("long",
		"���Ǻ���һ�ɵ�����������ĵ��ӣ���ԻСʫ�������������죬����ʦ����ѩ��ϲ����\n");
	set("combat_exp",5000);
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
