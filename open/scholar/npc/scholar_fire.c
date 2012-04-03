#include <ansi.h>
inherit NPC;

void create()
{
        set_name("儒生",({"scholar fire","scholar","fire"}));
        set("title","火堂");
        set("gender","男性");
        set("race", "人类");
	set("age", 22);
	set("long", "他是身处在火堂的儒生, 正在火堂中读书.\n");
	set("str", 30);
        set("max_kee", 550);
        set("kee", 550);
        set("max_force", 300);
        set("force", 300);
        set_skill("parry",40);
        set("combat_exp",20000);
        set_skill("knowpen", 40);
        set_skill("stabber", 40);
        set_skill("force",40);
        set("force_factor", 2);
        map_skill("stabber","knowpen");	
        set_skill("dodge",40);
	set_skill("winter-steps", 40);
        map_skill("dodge","winter-steps");
        set("chat_chance_combat",15);
	setup(); 
	add_money("silver",10);
carry_object("/open/scholar/obj/pen3")->wield();
}
