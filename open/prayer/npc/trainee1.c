#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("弟子",({"trainee"}));
    set("title", "圣火教");
    set("gender", "女性");
    set("age",22);
    set("attitude","peaceful");
    set("long",@LONG
圣火教的教徒,而且均是习武之人!!!大家的共同愿望便是将圣火教传遍中原武林.

LONG);
 
    set("combat_exp",10000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",200);
    set("kee",200);
    set("limbs",({"头","手","脚","背","腹","腰"}));
    set_skill("universe",10);
    set_skill("move",30);
    set_skill("unarmed",40);
    map_skill("unarmed","universe");
 
    setup();
    add_money("silver",10);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-boots")->wear();
}
