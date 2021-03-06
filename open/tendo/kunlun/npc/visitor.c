// guard.c

inherit NPC;
void create()
{
        set_name("游客",({"visitor"}));
	set("gender", "男性" );
	set("age", 25);
	set("str", 10);
	set("cor", 25);
	set("cps", 25);
	set("int", 15);
	set("long",
		"一位来昆仑山游玩的游客.他正在游览四周的美景,\n"
		"一点也没在意你的到来...\n" );
        set("combat_exp", 400);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
                "游客说: 这昆仑山风景真优雅...\n",
                "游客说: 这儿山高水长，真令人流连忘返...\n",
		"游客说: 听说昆仑原是一座火山...\n",
		"游客说: 天池终年不结冻，想必是位于火山口上。\n"
	}) );
	set_skill("dagger", 4);
	set_skill("parry", 10);
	set_skill("dodge", 15);
	setup();
        carry_object("/open/gsword/obj/map.c");
	add_money("silver",3);
        carry_object("/open/gsword/obj/robe")->wear();
        carry_object("/obj/example/dagger")->wield();
}
