#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
string do_ask();
void create()
{
	set_name("魔教老大",({"master poisoner","poisoner"}));
	set("gender","男性");
	set("guild_master",1);
	set("class","poisoner");
          set("combat_exp",1000000);
          set("attitude","heroism");
	set("age",26);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",800);
	set_skill("literate",80);
	set("max_force",800);
	set_skill("array",40);
	set_skill("cure",60);
	set_skill("dagger",40);
	set_skill("move",100);
	set("inquiry",([
	"魔教":	(: do_ask :),
	]));
	set_skill("force",40);
	set_skill("magic",20);
	set_skill("dodge",100);
	set_skill("parry",60);
	set_skill("poison",100);
	set_skill("spells",20);
	set_skill("throwing",60);
	set_skill("unarmed",40);
	set_skill("whip",60);
	set("force_factor",10);
           set_skill("parry",60);
	set_skill("coldpoison",100);
	set("chat_chance_combat",60);
	map_skill("move","nine-steps");
	map_skill("poison","coldpoison");
	setup();
	carry_object(POISON_OBJ"bleed_whip")->wield();
	carry_object("/obj/poison/rose_poison")->set_amount(30);
	carry_object("/obj/poison/five_poison")->set_amount(30);
	carry_object("/obj/poison/dark_poison")->set_amount(30);
}

void init()
{
	add_action("do_join","join");
}
int do_join()
{
	object me=this_player();
	if(this_player()->query("class"))
		return notify_fail("你已经加入其他工会了。\n");
	if(me->query_temp("do_join_poison_1")!=1||me->query_temp("do_join_poison_2")!=1)
	{
		command("say 想入魔教，先问问两位长老吧 !\n");
		return 1;
	}
	if(me->query_temp("do_join_poison_3")!=1)
	{
		command("say 想入魔教 ? 我还没答应呢 !\n");
		return 1;
	}
	this_player()->set("class","poisoner");
	message("system",
	HIR "突然间......狂风大作、晴天霹雳.....\n\n世间上又多一个魔教徒"+this_player()->name()+" !!!\n" NOR,users());
	return 1;
}
string do_ask()
{
	command("nod");
	this_player()->set_temp("do_join_poison_3",1);
	return "想入我魔教，可以 !\n";
}
