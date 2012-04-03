#include <village.h>
#include <ansi.h>

inherit F_VENDOR;

void create()
{
        set_name("����",({"armor boss","boss"}));
        set("gender", "����" );
        set("title","ħ�����ߵ��ϰ�");
        set("age", 42);
        set("long","ħ�����ߵ���ϰ�, ��һλ������������.\n");
        set("combat_exp",5000);
        set("attitude", "friendly");
        set("no_kill", 1);
        set_skill("dodge", 30);
        set_skill("unarmed",30 ); 
        set_skill("parry", 30);
        set("vendor_goods", ({
            V_OBJ"mamulet",
            V_OBJ"mboots",
            V_OBJ"mhat",
            V_OBJ"mskirt",
            V_OBJ"mbelt",
            V_OBJ"mcloth",
            V_OBJ"mlegging",
            V_OBJ"mwrists",
       }) );
        setup();
        add_money("coin",500);
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
        command("say "+RANK_D->query_respect(ob)+"��������, ���ﶼ�Ǻö���!");
} 
