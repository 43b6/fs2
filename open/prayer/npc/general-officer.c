#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("�ܽ�ͷ",({"general-officer","officer"}));
    set("gender", "����");
    set("age",38);
    set("attitude","peaceful");
    set("long",@LONG

	ʥ��̵��ܽ�ͷ, ��ѧ�ĸ������, �ʱ���������Ϊ������
	ѧ�Ľ���!!�ֱ���ʥ��������е�����ѧ�ල�Ľ�ɫ!!
LONG);
 
    set("combat_exp",200000);
    set("str",35);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",750);
    set("kee",750);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",65);
    set_skill("force",80);
    set_skill("superforce",80);
    set_skill("move",75);
    set_skill("shift-steps",75);
    set_skill("unarmed",85);
    set_skill("parry",85);
    set_skill("dodge",60);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
     map_skill("parry","universe");
    map_skill("force","superforce");
 
    setup();
    add_money("gold",1);
    carry_object("/open/prayer/obj/tiger-robe")->wear();
    carry_object("/open/prayer/obj/tiger-legging")->wear();
}

void greeting(object who)
{
    if( (who->query("id") == "rence") )
    {
       command("say ��ӭʥ��̵Ĵ��̴���!!");
       command("bow "+who->query("name"));
    }
    else
    {
     command("say ��ӭ����ʥ���!!����Ȥ����ʥ�����??");
    }
return;
}
