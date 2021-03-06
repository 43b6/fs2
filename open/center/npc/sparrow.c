// sparrow.c by oda
// use in /open/center by powell

inherit NPC;

void create()
{
        set_name("小麻雀", ({ "sparrow" }) );
        set("long", "一只贪吃的小麻雀，左脚紧紧抓着一个闪闪发光的东西，\n跳来跳去的，完全无视于危险的存在。\n");
        set("race","野兽");
        set("age", 2);
        set("str", 8);
        set("con", 9);
        set("max_gin", 60);
        set("max_kee", 60);
        set("max_sen", 60);

        set("limbs", ({ "尖嘴", "翅膀", "左脚", "右脚", "爪子" }) );
        set("verbs", ({ "claw", "poke" }) );
        set("chat_chance", 4);
        set("chat_msg", ({
                "小麻雀啄啄你身上的衣物，完全不害怕的样子。\n",
        }) );
                
        set("combat_exp",80);
        setup();
        add_money("coin", 1);
}
