#include <village.h>
#include <ansi.h>

inherit NPC;

void create()
{
        set_name("���",({"store boss","boss"}));
        set("gender", "����" );
        set("title","ħ����̵��ϰ�");
        set("age", 47);
        set("long","ħ����̵���ϰ�, ʮ��ļ�����, ���˾���������.\n");
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
        command("hehe "+ob->query("id"));
        command("say "+RANK_D->query_respect(ob)+"�����濴, ����Ķ���������������!!");
} 
