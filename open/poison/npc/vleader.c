
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("村长",({"village leader","leader"}) );
	set("gender","男性");
	set("age",47);
	set("str",25);
	set("con",22);
	set("max_kee",440);
	set("max_gin",400);
	set("max_sen",350);
	set_skill("dodge",30);
	set_skill("unarmed",30);
	set_skill("parry",30);
	set("combat_exp",10000);
	set("long","
本村的村长，一位乐善好施的人，生性最喜替人排解纠纷，你有甚么问题
仅管向他开口，想必他一定会尽力帮忙(help)的。\n");
	set("chat_chance", 15);
	set("chat_msg", ({
	"村长皱了皱眉说道:那些该死的强盗。\n",
	"村长忧愁的说道:那些黑风寨的畜生不知会不会来犯。\n",
}) );
	set("inquiry",([
	"help" : "唉~~~(他的表情看来他比你还需要帮助。)\n"
	+"        希望将军能平安无事，这样村子的安全才有保障。\n",


	"强盗" : "要不是有将军在，这里只怕早已被洗劫一空了。",
	"将军" : "只要有将军在此保护，黑风寨的人绝不敢来此撒野。",
	"黑风寨" : "那是那群强盗的栖身之所，听说是盖在山中，但详细地点我也不清楚。\n",

]) );
	setup();
	add_money("silver", 5);
	carry_object("/obj/cloth.c")->wear();
}
          
