#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("����",({"paltoon"}));
    set("title", "ʥ�������");
    set("gender", "Ů��");
    set("age",22);
    set("attitude","peaceful");
    set("long",@LONG

ʥ��̵Ľ�ͽ, ���ܹ�������ѡѵ��!!!��������Ϊʥ����������׵ľ���.

LONG);
 
    set("combat_exp",10000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",310);
    set("kee",310);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",20);
    set_skill("force",50);
    set_skill("superforce",30);
    set_skill("move",45);
    set_skill("shift-steps",40);
    set_skill("unarmed",55);
    set_skill("parry",55);
    set_skill("dodge",50);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("silver",10);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
}