// tujau.c by oda

#include <../badman.h>

inherit NPC;

void create()
{
	set_name("������", ({ "tu jau jau", "tu", "jau" }) );
	set("nickname", "���в�Ů");
	set("gender", "Ů��");
	set("age", 39);
	set("long", "�����ڻ�������ǰ������˾����Ǹ���Ů���������ӣ�����������ԶҲ��/n���壬��Ϊ���������������������µ�һ���������ܿ�����������Ŀ��\n");

	set("str", 25);
	set("cor", 26);
	set("int", 35);
	set("spi", 25);
	set("cps", 30);
	set("con", 22);
	set("per", 35);
	set("combat_exp", 2200);

	// set("chat_chance", 5);
	set("chat_msg", ({
		"ũ��̧��ͷ��������ͷ�ϵĺ�ˮ������������ȥŬ���ĸ��\n",
	}) );
	// set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		"ũ���е���������������ɱ�˰���\n",
		"ũ���е�����Ҫ��ʲô��ҪǮҲ����ɱ�Ұɣ�\n",
	}) );

	setup();
	// carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("ũ��Ц�Ŷ���˵����λ"+RANK_D->query_respect(me)+"����Ц�˺���?\n");
}
