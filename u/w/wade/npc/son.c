// sangoku.c

#include <ansi.h>

inherit NPC;
inherit F_SAVE;

void create()
{
	set_name( "����", ({ "son" }) );
	if( !restore() ) {
		set("short", "С����");
		set("long",
			"�����԰���ɳ���\n" );
		set("gender", "����" );
		set("race", "����");
		set("age",15);
		set("chat_chance", 15);
		set("chat_msg", ({
			CYN "����˵��: ����Ǯ�Ĳ���!!\n" NOR,
		}) );
		set("chat_msg_coombat", ({
			CYN "\n����˵��: ��Ҫ���Ұְֽ�, ���۸���!\n"NOR,
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
  say(name()+"˵��: ����������, ȥ���Ұ���ɡ�\n");
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
