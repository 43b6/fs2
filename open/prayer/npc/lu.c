//½�ܽ
#include <command.h>
 
inherit NPC;
 
void create()
{
    set_name("½�ܽ",({"lu chi-fu","lu","chi-fu"}));
    set("gender", "Ů��");
    set("age",32);
    set("attitude","friendly");
    set("long",@LONG

        ��Ů�ɵĵ���, ��Ϊʦ��������֮λ����ʦ�ú�, ȴ��Ը
        �������뽣���ഫ, �ʻ�������!!������ı��ȡ����!!

LONG);
 
    set("combat_exp",700000);
    set("str",30);
    set("con",25);
    set("int",30);
    set("per",30);
    set("cps",30);
    set("kar",20);
    set("force",900);
    set("max_force",900);
    set("force_factor",5);
    set("max_kee",1970);
    set("kee",1970);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",80);
    set_skill("move",80);
    set_skill("parry",80);
    set_skill("sword",80);
    set_skill("henma-steps",80);
    set_skill("girlsword",70);
    set_skill("holy-force",80);
    map_skill("move","henma-steps");
    map_skill("force", "fireforce");
    map_skill("sword", "girlsword");
    map_skill("dodge", "henma-steps");
    map_skill("parry", "girlsword");
    set("chat_chance",3);
    set("chat_msg", ({
        "[36m���������Ϊ�����ֻء�!!\n\n"
        "[36m�ټұ������������þ��衫[0m!!\n\n",
    }) );

    setup();
    carry_object("/open/prayer/obj/topknot")->wear();
    carry_object("/open/prayer/obj/tiger-robe")->wear();
//    carry_object("/open/prayer/obj/
}


int accept_kill(object who)
{
      
    if( who->query_temp("will_kill") && (int) !who->query("combat_exp")<= 500000 )
    {
    command("angry "+getuid(who));
    write("[36m�㾹Ȼ�������������ף��ҿ��㻹���µ���ȥ����ʦ��ѧ��!![0m��\n");
    kill_ob(who);
    }
    return 0;
}



