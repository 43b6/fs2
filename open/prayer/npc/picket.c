#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("����Ѳ��",({"picket-guard","picket"}));
    set("title", "�����");
    set("gender", "����");
    set("age",36);
    set("attitude","peaceful");
    set("long",@LONG

	����ŵ��ε�Ѳ��,ְ������Ӳ�����ڵ�����,!

LONG);
 
    set("combat_exp",70000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",1370);
    set("kee",1370);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("fire-catch",45);
    set_skill("force",40);
    set_skill("superforce",40);
    set_skill("move",45);
    set_skill("shift-steps",60);
    set_skill("stick",45);
    set_skill("parry",45);
    set_skill("dodge",40);
    map_skill("stick","fire-catch");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","fire-catch");
    map_skill("force","superforce");
    set("chat_chance",3);                              //˵���Ļ���
    set("chat_msg",({                                  
    (: this_object(),"random_move" :), }));
    set("chat_chance_combat",50);
//    set("chat_msg_combat",({
//    (: perform_action,"unarmed." :),}));
 
    setup();
    add_money("coin",40);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
}

void greeting(object who)
{
    if( (who->query("family/family_name") == "ʥ���") )
    {
       command("say �����������??");
       command("wave "+who->query("name"));
       command("say "+who->query("name")+"��Ҫ����̫����!!!");
    }
    else
    {
     command("say Ҫ̽���Ҫ���ְ���!!��Ҫ�������ֵ�!!");
    }
return;
}