// rewrite from old_buffalo.c by oda
// brownhorse.c by powell

inherit NPC;

void create()
{
        set_name("棕色马", ({ "Brown horse", "horse" }) );
        set("race", "野兽");
        set("age", 20);
        set("long", 
            "一匹健壮的棕色马, 可以禁的住长途的跋涉, 是代步的好工具。\n");

        set("str", 20);
        set("cor", 25);
        set("max_gin", 220);
        set("max_kee", 210);
        set("max_sen", 200);

        set("limbs", ({ "身体", "头部", "前脚", "后腿", "尾巴" }) );
        set("verbs", ({ "hoof", "bite"  }) );

        set("chat_chance", 3);
        set("chat_msg", ({
                "粽色马跺过来又跺过去, 一副精神亦亦的样子。\n"}) );
                
        set("combat_exp",200);

        setup();
}
