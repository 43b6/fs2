#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("��",({"horse-looker","looker"}));
    set("gender", "����");
    set("age",19);
    set("attitude","peaceful");
    set("long",@LONG

������������,!!���𿴹����������е���ƥ.

LONG);
 
    set("combat_exp",500);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",80);
    set("kee",80);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("unarmed",10);
    set_skill("dodge",10);
//    set("chat_chance",3);                              //˵���Ļ���
//    set("chat_msg",({                                  
//    (: this_object(),"random_move" :), }));
 
    setup();
    add_money("silver",1);
    carry_object("/open/prayer/obj/communion-cloth")->wear();
}

