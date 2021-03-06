// sangoku.c

#include <ansi.h>

inherit NPC;
inherit F_SAVE;

void create()
{
	set_name( "儿子", ({ "son" }) );
	if( !restore() ) {
		set("short", "小孩子");
		set("long",
			"他可以伴你成长。\n" );
		set("gender", "男性" );
		set("race", "人类");
		set("age",15);
		set("chat_chance", 15);
		set("chat_msg", ({
			CYN "儿子说道: 给点钱赌博吧!!\n" NOR,
		}) );
		set("chat_msg_coombat", ({
			CYN "\n儿子说道: 我要跟我爸爸讲, 你欺负我!\n"NOR,
		}) );

		set("str", 20);
		set("cor", 20);
		set("cps", 20);
		set("per", 20);
		set("int", 20);
		set("con", 20);
		set("spi", 20);
		set("kar", 20);
		set("save_file", "/u/w/wade/npc/son");
	}

	setup();
}

string query_save_file()
{
	return query("save_file");
}

void reset()
{
	save();
	::reset();
}

int accept_fight(object who)
{
  say(name()+"说道: 别找我挑啦, 去找我爸妈吧。\n");
  return 0;
}

int receive_damage(string type, int pts)
{
	int damage;

	damage = ::receive_damage(type, pts);
	if( (type=="kee") && (damage > (int)query("max_kee") / 5) )
		random_move();

	return damage;
}

void die()
{
  save();
  ::die();
}
