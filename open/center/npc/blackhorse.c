// rewrite from old_buffalo.c by oda
// blackhorse.c by powell

inherit NPC;

void create()
{
        set_name("黑马", ({ "Black horse", "horse" }) );
        set("race", "野兽");
        set("age", 20);
        set("long", 
            "一匹雄纠纠的黑马, 全身的毛黑的发亮, 看起来颇有千里马的架势。\n");


        set("str", 30);
        set("cor", 35);
        set("max_gin", 500);
        set("max_kee", 500);
        set("max_sen", 500);

        set("limbs", ({ "身体", "头部", "前脚", "后腿", "尾巴" }) );
        set("verbs", ({ "hoof", "bite"  }) );

        set("chat_chance", 1);
        set("chat_msg", ({
                "黑马抬头嘶鸣一声, 吓了你一大跳。\n"}) );
                
        set("combat_exp",300);

        setup();
}
