// te.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("��ս", ({ "te jang", "te", "jang" }) );
	set("nickname", "��ʨ");
	set("title", "���˹��󻤷�");
	set("gender", "����");
	set("class", "bandit");
	set("age", 48);
	set("long", "������һͷ���ҷ����ټ��������ĺ��ӣ�����ͷ��������������һͷ��ʨ��\nһ����������ս������Ī����֮ɥ������Ϊ��һ����������������ײ��ϣ���\nҪ���ĳ������������������ݣ���Ҳ�����˳�������ʨ����������\n�����Ƕ��˹ȵ��󻤷���ȫȨ��������ݵ�ѵ�����ˡ�\n");
	set("attitude", "badman");
	set("combat_exp", 950000);

	set("str", 42);
	set("cor", 45);
	set("int", 14);
	set("spi", 18);
	set("cps", 25);
	set("con", 35);
	set("per", 14);
	set("max_force", 1700);
	set("force", 1700);
	set("force_factor", 10);
	set("max_kee", 2500);
	set("max_gin", 1500);
	set("max_sen", 1500);

	set_skill("array", 100);
	set_skill("blade", 85);
	set_skill("dodge", 30);
	set_skill("force", 70);
	set_skill("move", 35);
	set_skill("parry", 40);
	set_skill("unarmed", 90);
	set_skill("badstrike", 100);
	set_skill("badforce", 80);
	set_skill("ghost-steps", 50);
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	set("functions/evil-blade/level", 35);

	set("chat_chance_combat", 30);
	set("chat_msg_combat", ({
		(: perform_action, "unarmed.evil-blade" :),
	}));

	setup();
	//carry_object(BAD_OBJ"lion_blade")->wield();
	add_money("gold",10);
}
