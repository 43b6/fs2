#include <village.h>
#include <ansi.h>

inherit F_VENDOR;

void create()
{
        set_name("ŷ��ţ",({"weapon boss","boss"}));
        set("gender", "����" );
        set("title","ħ����������ϰ�");
        set("age", 25);
        set("long","ħ�����������ϰ�, ��������������ţ, �Ǹ���ʵ����.\n");
        set("combat_exp",5000);
        set("attitude", "friendly");
        set("no_kill", 1);
        set_skill("dodge", 30);
        set_skill("unarmed",30 ); 
        set_skill("parry", 30);
        set("vendor_goods", ({
             V_OBJ"msword",
             V_OBJ"mblade",
             V_OBJ"mpen",
             V_OBJ"mdagger",
             V_OBJ"mwhip",
             V_OBJ"mclaw",

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
        command("say "+RANK_D->query_respect(ob)+"��Ҫʲô�Ļ����Ծ�����!");
} 

