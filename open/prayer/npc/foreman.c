#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("��ͷ",({"foreman"}));
    set("title", "ʥ�������");
    set("gender", "Ů��");
    set("age",30);
    set("attitude","peaceful");
    set("long",@LONG

	ʥ��̵���ͷ, ����ʥ������Ÿ��ŵı�������, ����
	ȴ���������ܹܵĹ�Ͻ����!!

LONG);
 
    set("combat_exp",80000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",370);
    set("kee",370);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",40);
    set_skill("force",80);
    set_skill("superforce",70);
    set_skill("move",75);
    set_skill("shift-steps",50);
    set_skill("unarmed",85);
    set_skill("parry",45);
    set_skill("dodge",60);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
 
    setup();
    add_money("silver",40);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
    carry_object("/open/prayer/obj/wind-shield")->wear();
}

