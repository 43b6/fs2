// din.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("ŷ����", ({ "oyawn din", "oyawn", "din" }) );
	set("nickname", "ƴ��ռ����");
	set("gender", "����");
	set("age", 41);
	set("long", "������ݹ���ᾣ�˫ȧ͹����һ�����̴�ֵĴ�磬��ŷ�����������ֵܡ�\n");

	set("str", 24);
	set("cor", 24);
	set("int", 29);
	set("spi", 25);
	set("cps", 22);
	set("con", 25);
	set("per", 27);
	set("combat_exp",112);

	// set("chat_chance", 5);
	// set("chat_msg", ({
	// 	"ũ��̧��ͷ��������ͷ�ϵĺ�ˮ������������ȥŬ���ĸ��\n",
	// }) );
	// set("chat_chance_combat", 50);
	// set("chat_msg_combat", ({
	// 	"ũ���е���������������ɱ�˰���\n",
	// 	"ũ���е�����Ҫ��ʲô��ҪǮҲ����ɱ�Ұɣ�\n",
	// }) );

	setup();
	// carry_object(S_OBJ"t_shirt")->wear();
}

// int accept_fight(object me)
// {
// 	return notify_fail("ũ��Ц�Ŷ���˵����λ"+RANK_D->query_respect(me)+"����Ц�˺���?\n");
// }
