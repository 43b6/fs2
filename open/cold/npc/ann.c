// bandit.c

inherit NPC;

void create()
{
	set_name("���Ȱ�",({"ann"}));
	set("age",19);
	set("nickname","��������");
	set("long",
		"���Ǻ��ȵ��Ĵ�����ӣ�Ҳ���й��е��ܽ�ʦ��ƽʱ������ڵ���������������ɷ���\n");
	set("combat_exp",100000);
	set("score", 60);
	set("attitude","heroism");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("force",30);
	set_skill("magic",80);
	set_skill("dodge",80);
	setup();
	add_money("silver", 3);
	create_family("��������",4,"����");
}
