#include <ansi.h>
#include <command.h>
inherit NPC;
void create()
{
        set_name("����",({"paltoon"}) );
        set("long","�����ŵ�����,���ܹ�������ѡѵ��!!!��������Ϊ�������������׵ľ���");
        set("gender","Ů��");
        set("class","doctor");
        set("combat_exp",200000);
        set("attitude","heroism");
        set("age",23);
        set("str",15);
        set("cor",40);
        set("per",30);
        set("int",30);
        set("force",1000);
        set("max_force",1000);
        set("kee",1000);
        set_skill("literate",30);
        set("max_kee",1000);
        set_skill("cure",40);
        set_skill("dodge",60);
        set_skill("move",60);
        set_skill("parry",60);
        set_skill("stabber",60);
        set_skill("force",50);
        set_skill("yu-needle",65);
set_skill("seven-steps",65);
        set_skill("shinnoforce",55);
        map_skill("stabber","yu-needle");
map_skill("dodge","seven-steps");
        map_skill("parry","yu-needle");
map_skill("move","seven-steps");
        map_skill("force","shinnoforce");
        set("force_factor",10);

        setup();
        carry_object("/open/doctor/obj/needle4.c")->wield();
        add_money("gold",5);
}

void greeting(object ob)
{
        if( (string)ob->query("class") == "poisoner" )
{
        command("say ����˵����ħ�����˸�ɱ����,�������ɣ�");
        kill_ob(ob);
}
}


