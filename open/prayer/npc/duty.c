#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("ֵ�����",({"duty"}));
    set("gender", "����");
    set("age",22);
    set("attitude","peaceful");
    set("long",@LONG

	ʥ��̵Ľ�ͽ, ÿ���˶�����Ҫ����ֵ�������!!��С�Ĺۻ����ڵİ�ȫ.

LONG);
 
    set("combat_exp",40000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("max_kee",800);
    set("kee",800);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",30);
    set_skill("force",50);
    set_skill("superforce",70);
    set_skill("move",75);
    set_skill("shift-steps",40);
    set_skill("unarmed",85);
    set_skill("parry",55);
    set_skill("dodge",70);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");
 
    setup();
    add_money("silver",10);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-shield")->wear();
}

void greeting(object who)
{
    if( (who->query("family/family_name") == "ʥ���") )
    {
       command("welcome "+who->query("name"));
    }
    else
    {
     command("say ���ﲻ��������ĵط�!���뿪!!");
    }
return;
}