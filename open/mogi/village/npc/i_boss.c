#include <village.h>
#include <ansi.h>

inherit F_VENDOR;

void create()
{
        set_name("米可",({"item boss","boss"}));
        set("gender", "女性" );
        set("title","魔界村道具店老板");
        set("age", 17);
        set("long","魔界村道具店的老板, 一付鬼灵精的模样, 贩卖着许多奇怪的道具.\n");
        set("combat_exp",5000);
        set("attitude", "friendly");
        set("no_kill", 1);
        set_skill("dodge", 30);
        set_skill("unarmed",30 ); 
        set_skill("parry", 30);
        set("vendor_goods", ({
            V_OBJ"f_charm",
//            V_OBJ"m_mirror",
            V_OBJ"f_pill_m",
         V_OBJ"f_pill",
            V_OBJ"mogi_ring",
            V_OBJ"b_potion",
            V_OBJ"r_potion",
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
        command("smile "+ob->query("id"));
        command("say "+RANK_D->query_respect(ob)+"需要些什么吗?");
} 
