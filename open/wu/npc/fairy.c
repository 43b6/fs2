//这是萱萱的 file

#include <ansi.h>

inherit NPC;

void create()
{
        set_name("雪缘", ({ "fairy" }) );
        set("nickname", HIM "星尘之妻" NOR );
        set("gender", "女性");
        set("age", 19);
        set("long", HIW "你看到一位身穿白纱的少女，美目含笑的望着你，她清丽脱俗的
脸庞深深吸引着你的目光．\n" NOR );

        set("str", 24);
        set("cor", 26);
        set("int", 29);

        set_skill("dodge", 100);
        set_skill("parry", 100);

	set("random_move",2);
        set("chat_chance", 20);
        set("chat_msg", ({
                HIW "雪缘深深的叹了一口气.......\n"NOR,
                HIW "雪缘喃喃自语：该做什么菜给星尘吃呢?\n"NOR,
                HIW "雪缘玩弄着发梢，突然脸红了起来，大概是想到″星尘″了～\n"NOR,
                 (: random_move :) })
            );
             
        set_temp("apply/attack", 0);
        set_temp("armor", 300000);
	set("combat_exp",83437);
        setup();
}

