#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("���",({"stoker"}));
    set("gender", "����");
    set("age",38);
    set("attitude","peaceful");
    set("long",@LONG

	���!!����ʳ��Ĳɹ�������.

LONG);
 
    set("combat_exp",800);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",80);
    set("kee",80);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("move",10);
    set_skill("unarmed",10);
    set_skill("parry",10);
    set_skill("dodge",10);
    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("silver",1);
    carry_object("/open/prayer/obj/communion-cloth")->wear();
}