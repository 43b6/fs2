inherit NPC;

void create()
{
	set_name("С�к�",({"boy"}));
	set("long","һ�����ÿɰ���С�к� , �װ����ֵ� .\n");
	set("gender","����");
	set("combat_exp",500);
	set("attitude","peaceful");
	set("age",12);
	set_skill("unarmed",5);
	set_skill("parry",5);
	set_skill("dodge",5);
	set("chat_chance",10);
	set("chat_msg",({
	}));
	setup();
	add_money("coin",10);
}
