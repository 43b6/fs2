// rogue.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("С��å", ({ "rogue" }) );
	set("gender", "����");
	set("age", 15);
	set("attitude", "badman");
	set("long", "һ�������������µ�С��å���������Ͳ���ʲô�ö�����\n");
	set("combat_exp", 800);
	set_skill("parry", 5);
	set_skill("dodge", 5);
	set("max_kee", 150);

	set("chat_chance", 6);
	set("chat_msg", ({
	(: this_object(), "random_move" :),
	"С��å�������е�С��������ǰ���ơ�\n",
	"С��å������˵��������С���ٿ��ָ�����ร�\n",
	"С��å���������������ҵ����ӵ�·��\n",
	}));

	setup();
	carry_object(BAD_OBJ"knife")->wield();
	add_money("silver", 5);
}
