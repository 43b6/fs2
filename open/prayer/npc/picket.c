#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("监狱巡察",({"picket-guard","picket"}));
    set("title", "天机门");
    set("gender", "男性");
    set("age",36);
    set("attitude","peaceful");
    set("long",@LONG

	天机门地牢的巡逻,职责便是视察地牢内的秩序,!

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
    set("limbs",({"头","手","脚","背","腹","腰"}));
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
    set("chat_chance",3);                              //说话的机率
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
    if( (who->query("family/family_name") == "圣火教") )
    {
       command("say 来提调犯人吗??");
       command("wave "+who->query("name"));
       command("say "+who->query("name")+"不要逗留太久了!!!");
    }
    else
    {
     command("say 要探监就要保持安静!!不要吵吵闹闹的!!");
    }
return;
}