#include <command.h>
inherit NPC;
void create()
{
    set_name("�ܹ�",({"general manager","manager"}));
    set("title", "������");
    set("gender", "Ů��");
    set("age",32);
    set("attitude","peaceful");
    set("long",@LONG

        �����ŵ��ܹ�, ר�Ÿ������ڵĴ�С����, ��
        ��æ������, �����е���������Щ����˵!!

LONG);

    set("combat_exp",700000);
    set("str",25);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",30);
    set("force",1400);
    set("max_force",1400);
    set("force_factor",10);
    set("max_kee",1300);
    set("kee",1300);
    set_skill("stabber",70);
    set_skill("yu-needle",70);
    set_skill("force",80);
    set_skill("shinnoforce",80);
    set_skill("move",80);
    set_skill("literate",70);
    set_skill("cure",50);
    set_skill("godcure",60);
    set_skill("seven-steps",80);
    set_skill("parry",70);
    set_skill("dodge",70);
    map_skill("move","seven-steps");
    map_skill("dodge","seven-steps");
    map_skill("stabber","yu-needle");
    map_skill("parry","yu-needle");
    map_skill("force","shinnoforce");
    map_skill("cure","godcure");
    set("chat_chance_combat",45);
    set("functions/break-kee/level",40);
    set("chat_msg_combat",({
    (: perform_action("stabber.break-kee") :),
    }));
    setup();
    add_money("gold",7);

    carry_object("/open/doctor/obj/needle6")->wield();

}

void greeting(object ob)
{
        if( (string)ob->query("class") == "poisoner" )
{
        command("say ��������,����ħ�������ɱ����,�������ɣ�");
        kill_ob(ob);
}
}

