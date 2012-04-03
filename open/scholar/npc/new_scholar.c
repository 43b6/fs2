#include <ansi.h>

inherit NPC;
void create()
{
     set_name("新进儒生", ({"new boy","boy"}));
        set("gender", "男性" );
        set("age", 15);
        set("str", 25);
        set("cor", 45);
        set("cps", 25);
        set("int", 30);
        set("long",
                "刚加入儒门的儒生, 也是儒门的新进弟子。\n");
        set("combat_exp",3000);
        set("chat_chance", 1);
        set("chat_msg", ({
                (: command ("sigh") :),
                (: command ("say 白日依山尽....黄河入海流....") :),
                (: command ("say 欲穷千里目....更上一层楼....") :),
        }) );
        set_skill("parry", 50);
        set_skill("unarmed", 50);
        set_skill("dodge", 30);
        set_skill("winter-steps", 30);
        map_skill("dodge","winter-steps");
        setup();
        add_money("silver", 5);
        carry_object("/obj/cloth")->wear();
}

