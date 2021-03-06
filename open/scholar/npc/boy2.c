// bookboy.c

#include <ansi.h>

inherit NPC;
void create()
{        
        set_name("儒门书僮", ({ "book boy", "boy" }) );
        set("family/family_name","儒门");
	set("gender", "男性" );
        set("age", 10);
        set("str", 25);
	set("cor", 45);
	set("cps", 25);
        set("int", 30);
	set("long",
                "儒门的小书僮, 也是儒门的新进弟子。\n");
	set("combat_exp",717);
	set("attitude", "peaceful");
        set("chat_chance", 1);
	set("chat_msg", ({
                (: command ("sigh") :),
                (: command ("say 儒门的弟子越来越少了....") :),
                (: command ("say 希望儒门弟子能同心协力, 重振儒门！") :),
	}) );
        set_skill("stabber", 20);
        set_skill("parry", 20);
        set_skill("knowpen", 15);
        map_skill("stabber","knowpen");
        map_skill("parry","knowpen");
        set_skill("unarmed", 15);
        set_skill("dodge", 25);
        set_skill("winter-steps", 15);
        map_skill("dodge","winter-steps");
	setup();
        add_money("silver", 5);
        carry_object("/obj/cloth")->wear();
        carry_object("/open/start/obj/pen")->wield();
}
