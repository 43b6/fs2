inherit NPC;

void create()
{
	set_name("�ν־���",({"man"}));
	set("long","���ָ۵ľ��� , �����νֹ��� !\n");
	set("gender","����");
	set("combat_exp",100);
	set("attitude","peaceful");
	set("age",35);
	set("chat_chance",10);
	set("chat_msg",({
	"�ν־��񵽴�������ȥ !\n",
	(: "random_move" :),
	}));
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",30);
}
