#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("����",({"trainee"}));
    set("title", "ʥ���");
    set("gender", "Ů��");
    set("age",22);
    set("attitude","peaceful");
    set("long",@LONG
ʥ��̵Ľ�ͽ,���Ҿ���ϰ��֮��!!!��ҵĹ�ͬԸ�����ǽ�ʥ��̴�����ԭ����.

LONG);
 
    set("combat_exp",5000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",200);
    set("kee",200);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("move",45);
    set_skill("unarmed",30);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("silver",10);
    carry_object("/open/prayer/obj/wind-robe")->wear();
}
