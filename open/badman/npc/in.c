// in.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("������", ({ "in ju yu", "in", "yu" }) );
	set("title", "���˹��һ���");
	set("nickname", "���˰��");
	set("gender", "����");
	set("class", "bandit");
	set("attitude", "badman");
	set("age", 42);
	set("long", "����˿���������ȫ�ޣ������Ǵ󲡴����������Ǵӹײ��������������ˡ�\n�����ϴ��������Ṧ������ʥ���ѵ�������Ӱȥ���ٵľ��أ���ڤ������\n�����������ġ�\n�����Ƕ��˹ȵ��һ����������ƹܹ��ڵ���Ա���ȡ�\n");

	set("str", 28);
	set("cor", 30);
	set("int", 23);
	set("spi", 30);
	set("cps", 29);
	set("con", 22);
	set("per", 19);
	set("combat_exp", 900000);
	set("max_force", 1200);
	set("force", 1200);
	set("force_factor", 10);
	set("max_gin", 1000);
	set("max_kee", 2500);
	set("max_sen", 1000);

	set_skill("badforce", 65);
	set_skill("badstrike", 90);
	set_skill("dodge", 100);
	set_skill("force", 55);
	set_skill("ghost-steps", 100);
	set_skill("move", 100);
	set_skill("parry", 40);
	set_skill("unarmed", 80);
	map_skill("force", "badforce");
	map_skill("unarmed", "badstrike");
	map_skill("parry", "badstrike");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");
	set("functions/evil-blade/level", 30);

	set("chat_chance_combat", 35);
	set("chat_msg_combat", ({
	(: perform_action, "unarmed.evil-blade" :),
	}));

	setup();
	add_money("gold", 10);
}
