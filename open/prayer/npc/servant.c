#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("����",({"servant"}));
    set("gender", "Ů��");
    set("age",14);
    set("attitude","peaceful");
    set("long",@LONG

	С����!!����Ӵ����������Ĺ���.

LONG);
 
    set("combat_exp",50);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",30);
    set("kee",30);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("move",10);
    set_skill("dodge",10);
    set("chat_chance",3);                              //˵���Ļ���

 
    setup();
    add_money("coin",5);
    carry_object("/open/prayer/obj/communion-cloth")->wear();
}

