// heaven_soldier.c

#include <ansi.h>

inherit NPC;

void create()
{

      set_name(HIR "��ħ" NOR,({"ghost"}));
	set("attitude", "friendly");

	set("max_gin", 1000);
	set("max_kee", 1000);
	set("max_sen", 1000);


	set("str", 40);
	set("cor", 30);
	set("cps", 25);

	set("combat_exp", 100000);
/*
	set("chat_chance", 15);
	set("chat_msg_combat", ({
		name() + "�ȵ������ϣ����Ҷԣ�\n"
	}) );
*/
       set_skill("unarmed",70);
	set_skill("parry", 70);
	set_skill("dodge", 70);

	setup();

}

int heal_up()
{
	if( environment() && !is_fighting() ) {
		call_out("leave", 1);
		return 1;
	}
	return ::heal_up() + 1;
}

void leave()
{
      message_vision(
       HIR "��ħ����Ӱ������ʧ�ˡ�\n" NOR,this_player());
	destruct(this_object());
}

void invocation(object who)
{
	int i;
	object *enemy;

	message("vision",
             HIY "��ħ֮���������ħ��\n" NOR,this_player());
	enemy = who->query_enemy();
	i = sizeof(enemy);
	while(i--) {
		if( enemy[i] && living(enemy[i]) ) {
			kill_ob(enemy[i]);
			if( userp(enemy[i]) ) enemy[i]->fight_ob(this_object());
			else enemy[i]->kill_ob(this_object());
		}
	}
	set_leader(who);
}
