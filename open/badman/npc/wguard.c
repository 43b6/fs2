// wguard.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("����������", ({ "guard" }) );
	set("title", "���˹ȵڶ���С��");
	set("gender", "����");
	set("age", 25);
	set("attitude", "badman");
	set("long", "�㿴��һ������׳�����ӣ���������ĵ������ﵣ��������\n");
	set("combat_exp", 10000);
	set("str", 25);
	set("max_kee", 400);
	set("force", 200);
	set("max_force", 200);
	set("force_factor", 5);
	set_skill("force", 24);
	set_skill("blade", 36);
	set_skill("parry", 20);
	set_skill("dodge", 20);
	set_skill("move", 20);
	set_temp("apply/attack", 15);
	set_temp("apply/dodge", 10);
	setup();
	carry_object(BAD_OBJ"blade")->wield();
}
