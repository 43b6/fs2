// hahaer.c by oda

#include <../badman.h>

inherit NPC;

void create()
{
	set_name("������", ({ "ha ha er", "ha", "er" }) );
	set("nickname", "Ц��ص�Ц����");
	set("gender", "����");
	set("age", 44);
	set("long", "�㿴��һ���������ֵ�Բ�����ӣ�����ʼ��ά����һ����\nЦ�ݣ����񲻻����Ƶġ�\n");
	set("attitude", "friendly");

	set("str", 25);
	set("cor", 25);
	set("int", 30);
	set("spi", 23);
	set("cps", 21);
	set("con", 25);
	set("per", 22);
	set("combat_exp", 2100);

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
