//woman.c

#include <../start.h>

inherit NPC;

string give_bento();

void create()
{
	set_name("农妇",({"woman"}));
	set("long","一个平凡的农家妇女，但似乎在烦恼着什么。\n");
	set("gender","女性");
	set("nickname", "张快嘴");
	set("age", 43);

	set("combat_exp",59);
	set("inquiry",([
	  "trouble":"你可以帮我一个忙吗？\n",
	  "help":"我丈夫现在正等着我送便当去，可是我现在又分不开身，\n你可以帮我送去给他吗？\n",
	  "便当":(: give_bento :),
	  "bento":(: give_bento :),
	]));

	setup();
	carry_object(S_OBJ"apron")->wear();
}

string give_bento()
{
	object who, item;
	who = this_player();

	if( who->query("quests/bento") || who->query_temp("bento")==1 )
		return "你不是已经把便当拿走了吗？\n";
	else if( who->query_temp("bento")==2 ) {
		item = new(S_OBJ"bento2");
		item->move(who);
		message_vision("妇女给$N一个便当。\n", who);
		who->set_temp("bento", 1);
		return "这次可别再把便当吃掉了喔！\n";
	}
	else {
		item = new(S_OBJ"bento");
		item->move(who);
		printf("妇女给%s一个%s。\n",
		who->query("name"),item->short() );
		who->set_temp("bento", 1);
		return "谢谢你，请把便当拿给我丈夫，我丈夫鼻子上有颗痣。\n";
	}
}
