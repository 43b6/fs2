// lee.c by oda

#include <../badman.h>

inherit NPC;

void create()
{
	set_name("�����", ({ "lee da tswei", "lee", "tswei" }) );
	set("nickname", "������ͷ");
	set("gender", "����");
	set("age", 40);
	set("long", "�㿴��һ����ò���������ӣ�������ʵ�������Ǵ�˵�У�����\n��ͷ����ʲô���Ե�����졣\n");

	set("str", 32);
	set("cor", 29);
	set("int", 22);
	set("spi", 20);
	set("cps", 22);
	set("con", 30);
	set("per", 32);
	set("combat_exp", 2400);

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
