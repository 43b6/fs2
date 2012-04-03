#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("��������",({"jail-guard","guard"}));
    set("title", "�����");
    set("gender", "����");
    set("age",42);
    set("attitude","friendly");
    set("long",@LONG

	����ŵ��ε�����,ְ����ǿ��ܵ����ڵ��˷�!!!

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
    set("max_kee",1570);
    set("kee",1570);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("universe",45);
    set_skill("force",50);
    set_skill("superforce",40);
    set_skill("move",45);
    set_skill("shift-steps",40);
    set_skill("unarmed",45);
    set_skill("parry",85);
    set_skill("dodge",40);
    map_skill("unarmed","universe");
    map_skill("move","shift-steps");
    map_skill("dodge","shift-steps");
    map_skill("parry","universe");
    map_skill("force","superforce");

    setup();
    add_money("coin",40);
    carry_object("/open/prayer/obj/wind-robe")->wear();
    carry_object("/open/prayer/obj/wind-shield")->wear();
}

int accept_fight(object who)
{
    return notify_fail("����˵��:��Ҫ���ط���ѽ!! ��������!!");
}

void greeting(object who)
{
      
      if( (who->query("family/family_name") == "ʥ���") )
      {
       command("say [36m������Ű���˷���[0m!!");
       command("shurg "+who->query("name"));
       command("say "+who->query("name")+"�ɲ�Ҫ���˷�Ū����!!!");
     }
    else
     {
     command("say ���ﲻ��������ĵط�!���뿪!!");
    }
 
    if( who->query_temp("ɱ���˷�") )
    {
    command("angry "+getuid(who));
    command("say [33m�㾹��ɱ���˷��������������������ȥ������[0m��\n");
    kill_ob(who);
    }
    else
    {
    command("stare "+getuid(who));
    command("say ���ҵĵ������Ҫ�ع���, ����......");
    }
    return;
}


