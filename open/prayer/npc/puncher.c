#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("拳师",({"puncher"}));
    set("title", "天机门");
    set("gender", "男性");
    set("age",30);
    set("attitude","peaceful");
    set("long",@LONG

	天机门的拳师, 负责天机门内的保安工作, 同时也是副门主
	直属教众的头头!!

LONG);
 
    set("combat_exp",60000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",350);
    set("kee",350);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("force",40);
    set_skill("superforce",40);
    set_skill("universe",45);
    set_skill("unarmed",50);
    set_skill("move",45);
    set_skill("shift-steps",60);
    set_skill("parry",85);
    set_skill("dodge",60);
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("unarmed","universe");
    map_skill("force","superforce");
    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("silver",40);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
    carry_object("/open/prayer/obj/silver-stick")->wield();
}

