inherit NPC;

void create()
{
	set_name("旅客",({"traveller"}));
	set("long","环游于世界各地的旅客 , 枫林港只是他旅行的一个据点 .\n");
	set("gender","男性");
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
