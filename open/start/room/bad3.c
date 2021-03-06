// lee.c by oda

#include <../badman.h>

inherit NPC;

void create()
{
	set_name("李大嘴", ({ "lee da tswei", "lee", "tswei" }) );
	set("nickname", "不吃人头");
	set("gender", "男性");
	set("age", 40);
	set("long", "你看到一个相貌不凡的男子，但是事实上他竟是传说中，除了\n人头以外什么都吃的李大嘴。\n");

	set("str", 32);
	set("cor", 29);
	set("int", 22);
	set("spi", 20);
	set("cps", 22);
	set("con", 30);
	set("per", 32);
	set("combat_exp", 2400);

	// set("chat_chance", 5);
	set("chat_msg", ({
		"农夫抬起头来擦擦额头上的汗水，又再弯下腰去努力的耕田。\n",
	}) );
	// set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		"农夫尖叫道：救命啊！有人杀人啊！\n",
		"农夫尖叫道：你要干什么？要钱也不用杀我吧！\n",
	}) );

	setup();
	// carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("农夫笑着对你说：这位"+RANK_D->query_respect(me)+"别开玩笑了好吗?\n");
}
