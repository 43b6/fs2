inherit NPC;

void create()
{
	set_name("�ÿ�",({"traveller"}));
	set("long","������������ص��ÿ� , ���ָ�ֻ�������е�һ���ݵ� .\n");
	set("gender","����");
	set("combat_exp",500);
	set("attitude","peaceful");
	set("age",35);
	set_skill("unarmed",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	set("chat_chance",10);
	set("chat_msg",({
	(: "random_move" :),
	}));
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",75);
}
