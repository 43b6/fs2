// lolo.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("С��", ({ "lolo", "lo" }) );
	set("gender", "����");
	set("age", 18);
	set("attitude", "badman");
	set("long", "һ���ռ�����˹ȵ�����С��죬�����ʱ�����ﻹ�����дʡ�\n");
	set("combat_exp", 1200);
	set_skill("blade", 10);
	set_skill("parry", 10);
	set_skill("dodge", 10);
	set_temp("apply/attack", 15);
	set_temp("apply/dodge",10);
	setup();
	carry_object(BAD_OBJ"steel_blade")->wield();
}
