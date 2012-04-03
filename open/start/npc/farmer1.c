// farmer1.c by oda

#include <../start.h>
inherit NPC;

void create()
{
	set_name("ũ��", ({ "Farmer", "farmer" }) );
	set("gender", "����");
	set("age", 30);
	set("long", "�㿴��һ��׳�����ӣ����ż򵥵ĺ�����վ������Ŭ���ĸ��\n������ڵ�Ƥ���������������ƽ�չ���֮���ࡣ\n");
	set("attitude", "friendly");

	set("str", 25);
	set("con", 20);
	set("combat_exp", 144);

	set("chat_chance", 5);
	set("chat_msg", ({
		"ũ��̧��ͷ��������ͷ�ϵĺ�ˮ������������ȥŬ���ĸ��\n",
	}) );
	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		"ũ���е���������������ɱ�˰���\n",
		"ũ���е�����Ҫ��ʲô��ҪǮҲ����ɱ�Ұɣ�\n",
	}) );

	setup();
	carry_object(S_OBJ"t_shirt")->wear();
}

int accept_fight(object me)
{
	return notify_fail("ũ��Ц�Ŷ���˵����λ"+RANK_D->query_respect(me)+"����Ц�˺���?\n");
}
