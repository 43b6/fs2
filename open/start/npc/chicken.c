// sparrow.c by oda

inherit NPC;

void create()
{
	set_name("��",({"chicken"}));
	set("race", "Ұ��");
	set("age", 2);
	set("long","һֻ������������������ȥ�ļ���\n");
	set("str", 8);
	set("con", 9);
	set("max_gin", 60);
	set("max_kee", 60);
	set("max_sen", 60);

	set("limbs", ({ "����", "ͷ��", "���" }) );
	set("verbs", ({ "poke", "claw" }) );

	set("chat_chance", 3);
	set("chat_msg",({"��������\t������!\n"}));
		
	set("combat_exp", 0);

	setup();
}
