// buffalo.c by oda

#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("ˮţ", ({ "Buffalo", "buffalo" }) );
	set("race", "Ұ��");
	set("age", 12);
	set("long", "��ֻˮţ��ĬĬ����������������\n");

	set("str",20);
	set("con",20);
	set("max_gin",140);
	set("max_kee",140);
	set("max_sen", 100);

	set("limbs", ({ "����", "����", "ǰ��", "����", "β��" }) );
	set("verbs",({"hoof","bite","dunt"}) );

	set("combat_exp", 60);

	setup();
	carry_object(START_OBJ"item");
}
