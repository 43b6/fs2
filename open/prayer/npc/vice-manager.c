#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("���ܹ�",({"vice manager","manager"}));
    set("title", "ʥ�������");
    set("gender", "Ů��");
    set("age",38);
    set("attitude","peaceful");
    set("long",@LONG

	ʥ������°����ŵ��ܹܵĸ���,���ܹܷ�̯һЩ����!!

LONG);
 
    set("combat_exp",400000);
    set("str",25);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",1200);
    set("max_force",1200);
    set("force_factor",5);
    set("max_kee",800);
    set("kee",800);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",70);
    set_skill("force",80);
    set_skill("superforce",80);
    set_skill("move",75);
    set_skill("shift-steps",75);
    set_skill("unarmed",75);
    set_skill("parry",85);
    set_skill("dodge",80);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
//    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("gold",3);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-cape")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
}

