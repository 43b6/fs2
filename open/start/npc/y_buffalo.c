// old_buffalo.c by oda

inherit NPC;

void create()
{
	set_name("Сˮţ",({"young buffalo","buffalo"}) );
	set("race", "Ұ��");
	set("age",3);
	set("long","���׵�Сˮţ����Ϊ�������������޷�����\n���ѱ��������⡣\n");

	set("str", 14);
	set("con",13);
	set("max_gin", 100);
	set("max_kee", 100);
	set("max_sen", 100);

	set("limbs", ({ "����", "ͷ��", "ǰ��", "����", "β��" }) );
	set("verbs",({"hoof","bite","dunt"}) );

		
	set("combat_exp",12);

	setup();
}
