#include <village.h>
#include <ansi.h>

inherit NPC;

void create()
{
        set_name("��Ӧ",({"bank boss","boss"}));
        set("gender", "����" );
        set("title","ħ���Ǯׯ�ϰ�");
        set("age", 43);
        set("long","ħ���Ǯׯ���ϰ�, ��һλ�Ͱ����׵�������.\n");
        set("combat_exp",5000);
        set("attitude", "friendly");
        set("no_kill", 1);
        set_skill("dodge", 30);
        set_skill("unarmed",30 ); 
        set_skill("parry", 30);
        setup();
        add_money("coin",50);
}

void init()
{
        object ob;

        ::init();
}  
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        command("say "+RANK_D->query_respect(ob)+"���!��ʲô����Ч�͵ĵط���?");
} 
