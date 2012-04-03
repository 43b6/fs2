#include <village.h>
#include <ansi.h>

inherit F_VENDOR;

void create()
{
        set_name("����",({"hotel boss","boss"}));
        set("gender", "Ů��" );
        set("title","ħ����õ��ϰ�");
        set("age", 23);
        set("long","ħ����õ���ϰ�, ������������, ��ʵ������ǧ�����ϵ�ħ��\n");
        set("combat_exp",5000);
        set("attitude", "friendly");
        set("no_kill", 1);
        set_skill("dodge", 30);
        set_skill("unarmed",30 ); 
        set_skill("parry", 30);
        set("vendor_goods", ({
             V_OBJ"d_leg",
             V_OBJ"bone_pot",
             V_OBJ"h_dumpling",
        }) );
        setup();
        add_money("coin",35);
}

void init()
{
        object ob;

        ::init();
        add_action("do_vendor_list", "list");
}  
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
        command("say ����"+RANK_D->query_respect(ob)+"��Ҫ��Ϣ��?");
} 
