
#include <ansi.h>

inherit NPC;
void create()
{
	set_name("小孩",({"child"}) );
	set("long","
一个可爱的小孩子，头上扎了两个髻，他正高兴的在玩耍着，似乎不知忧愁
为何物。\n");
	set("gender","男性");
	set("unarmed", 2);
	set("dodge", 3);
	set("attitude","friendly");
	set("age",14);
	set("max_kee",100);
	set("max_gin",100);
	set("max_sen",100);
	set("combat_exp",100);
	set("chat_chance",4);
	set("chat_msg" ,({
	"小孩高兴地笑着。\n",
	(: this_object(), "random_move" :),
}) );
	setup();
	carry_object("/obj/cloth.c")->wear();
	add_money("coin", 5);
}
