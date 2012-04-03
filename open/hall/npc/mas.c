inherit NPC;
#include <ansi.h>

void create()
{
set_name("神算子", ({ "accounter"}));
        set("title", "衙门师爷");
        set("gender", "男性" );
        set("nickname","[1;33m九面玲珑[0m");
        set("age", 46);
        set("str", 50);
        set("cor", 50);
        set("cps", 50);
        set("int", 50);
        set("spi", 50);
        set("kar", 50);
        set("per", 50);
        set("con", 50);

        set("max_atman", 5000);
        set("max_force", 5000);
        set("max_mana", 5000);
        set("atman", 5000);
        set("force", 5000);
        set("mana", 5000);
        set("force_factor", 5);

        set("long", @LONG
    无尘大人的得力助手，有着读书人的高峰亮节风范，据说他也是个
深藏不露的高手，不知传言是否确实??不过，他的确帮了百姓不少的忙
平常百姓也很敬重之。
LONG);

        set("combat_exp", 20000);
        set("score", 30000);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
        "冤冤相报何时了～～\n",
        "不要做无谓的挣扎了吧!!\n"
        }) );

        set_skill("unarmed", 60);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set("inquiry", ([
          "纪无尘" : "喔～你是问无尘大人喔! 他是好官喔!!",
	  "thief"  : "嗯..这名大盗可把我们无尘大人给整惨了, 连皇上都知道了, 唉..",
	]) );

        setup();
        carry_object(__DIR__"obj/o_cloth")->wear();
}
