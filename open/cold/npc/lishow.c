// bandit.c

inherit NPC;

void create()
{
	set_name("������",({"lishow"}));
	set("gender","Ů��");
	set("nickname","�������");
	set("age",14);
	set("long",
		"���Ǻ��������������̣�Ҳ�����ŵ�ʦ�ã����������ڷǷ����������������\n");
	set("combat_exp",800000);
	set("score", 60);
	set("attitude","heroism");
	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("force",30);
	set_skill("magic",80);
	set_skill("dodge",100);
	setup();
	add_money("silver", 3);
	create_family("��������",3,"����");
}
