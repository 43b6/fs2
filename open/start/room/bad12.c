// one.c by oda

#include </open/badman/badman.h>

inherit NPC;

void create()
{
	set_name("����", ({ "one tsun liu", "one", "liu" }) );
	set("gender", "����");
	set("age", 49);
	set("long", "�㿴��һ���������ӣ����ų��ۻƹڣ�����ƮƮ����Ȼ������\n���鿴��˵�����ĺ�ƽ������\n�������Ǹ���ҽ�������ڶ��˹��е��˶������β���\n");
	set("attitude", "peaceful");

	set("str", 22);
	set("cor", 20);
	set("int", 33);
	set("spi", 30);
	set("cps", 32);
	set("con", 28);
	set("combat_exp", 1300);

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
