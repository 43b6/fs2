//�󻤷�
#include <command.h>

inherit NPC;

void create()
{
    set_name("�󻤷�",({"hu-fa left"}));
    set("title","ʥ�������");
    set("gender", "Ů��");
    set("age",45);
    set("attitude","friendly");
    set("long",@LONG

	ʥ�������ѡ�����Ļ�����ְ�����ڱ�����Ҫ�����.

LONG);

    set("combat_exp",600000);
    set("str",25);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",1400);
    set("max_force",1400);
    set("force_factor",5);
    set("max_kee",1300);
    set("kee",1300);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",70);
    set_skill("force",80);
    set_skill("superforce",80);
    set_skill("stick",95);
    set_skill("move",75);
    set_skill("fire-catch",80);
    set_skill("shift-steps",75);
    set_skill("unarmed",75);
    set_skill("parry",85);
    set_skill("dodge",80);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","fire-catch");
    map_skill("force","superforce");
    map_skill("stick","fire-catch");

 
    setup();
    add_money("gold",4);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-stick")->wield();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
    carry_object("/open/prayer/obj/tiger-cape")->wear();
}


