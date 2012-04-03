#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("������",({"vice-chairman","chairman"}));
    set("title", "������");
    set("gender", "Ů��");
    set("age",50);
    set("attitude","friendly");
    set("long",@LONG

	ʥ������������ŵĸ�����,����ϸ��,�������ֵ��˲��ٵĽ���.

LONG);
 
    set("combat_exp",780000);
    set("str",35);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",3500);
    set("max_force",3500);
    set("force_factor",15);
    set("max_kee",2000);
    set("max_sen",2000);
    set("max_gin",2000);
    set("kee",2000);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",80);
    set_skill("force",85);
    set_skill("superforce",85);
    set_skill("stick",95);
    set_skill("move",80);
    set_skill("fire-catch",85);
    set_skill("shift-steps",80);
    set_skill("unarmed",80);
    set_skill("parry",85);
    set_skill("dodge",80);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
    map_skill("stick","fire-catch");
 //   set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
    carry_object("/open/prayer/obj/tiger-stick")->wield();
    carry_object("/open/prayer/obj/tiger-cape")->wear();

}
