#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("ȭʦ",({"puncher"}));
    set("gender", "����");
    set("age",30);
    set("attitude","peaceful");
    set("long",@LONG

	ʥ��̵�ȭʦ,������̳�ڵı�������!!

LONG);
 
    set("combat_exp",65000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",470);
    set("kee",470);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",40);
    set_skill("force",40);
    set_skill("superforce",40);
    set_skill("move",45);
    set_skill("shift-steps",60);
    set_skill("unarmed",45);
    set_skill("parry",85);
    set_skill("dodge",60);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("silver",40);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
}

