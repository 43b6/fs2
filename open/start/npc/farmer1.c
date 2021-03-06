// farmer1.c by oda

#include <../start.h>
inherit NPC;

void create()
{
	set_name("农夫", ({ "Farmer", "farmer" }) );
	set("gender", "男性");
	set("age", 30);
	set("long", "你看到一个壮年男子，穿着简单的汗衫正站在田里努力的耕田，\n从他黝黑的皮肤，你可以想像其平日工作之辛苦。\n");
	set("attitude", "friendly");

	set("str", 25);
	set("con", 20);
	set("combat_exp", 144);

	set("chat_chance", 5);
	set("chat_msg", ({
		"农夫抬起头来擦擦额头上的汗水，又再弯下腰去努力的耕田。\n",
	}) );
	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		"农夫尖叫道：救命啊！有人杀人啊！\n",
		"农夫尖叫道：你要干什么？要钱也不用杀我吧！\n",
	}) );

	setup();
	carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("农夫笑着对你说：这位"+RANK_D->query_respect(me)+"别开玩笑了好吗?\n");
}
