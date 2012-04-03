inherit NPC;

void create()
{
	set_name("监狱守卫", ({ "Jail Guard", "guard" }) );
	set("race", "人类");
	set("age", 31);
	set("long", "这是负责看守监狱的守卫\n");
	set("str", 150);
	set("cor", 150);
	set("limbs", ({ "头部", "身体", "手腕", "手臂", "腿部" }) );
        set_temp("apply/armor", 50);
	set("combat_exp",13844);
        set_skill("dodge", 36);
        set_skill("sword", 24);
        set_skill("parry", 27);
	setup();
        carry_object("/open/gsword/obj/sword")->wield();
        carry_object("/open/gsword/obj/boot-1")->wear();
        carry_object("/open/gsword/obj/robe")->wear();
        add_money("coin",400);
}

