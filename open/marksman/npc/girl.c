#include <ansi.h>
#include </open/open.h>

inherit NPC;
void create()
{
        set_name("小女孩", ({ "girl" }) );
        set("gender", "女性" );
        set("age",9);
        set("long",
                "一位长得天真可爱的小女孩。\n");
        set("combat_exp",2500);
        set("attitude", "peaceful");
set("max_kee",4500);
        set("chat_chance", 30);
        set("chat_msg", ({
        "小女孩天真无邪在那里跟其他小朋友玩捉迷藏。\n",
        }) );
        setup();
        add_money("coin", 10);
        carry_object("/obj/cloth")->wear();
}
int accept_kill(object ob)
{
 command("cry");
 command("say 爸爸!妈妈!你们在那里!大哥哥，大姐姐要杀我!!!");
 command("holdwith arrow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say 好吧!!我们就在这里玩吧。");
return 1;
}
