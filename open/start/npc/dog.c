// dog.c

inherit NPC;

void create()
{
	set_name("Ұ��", ({ "dog" }) );
	set("race", "Ұ��");
	set("age", 3);
	set("long", "һֻ�����������Ұ����\n");
	
	set("str",11);
	set("con",15);

	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
	

	setup();
}
