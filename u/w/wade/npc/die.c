// buffalo.c by oda
// loto.c    by powell

inherit NPC;

void test();

void create()
{
	set_name("����", ({ "Camel", "camel" }) );
	set("race", "Ұ��");
	set("age", 10);
	set("long", "��ֻ���������е����ڵ���, �׽������ϡ�\n");

	set("str",25);
	set("con",20);
	set("max_gin",140);
	set("max_kee",240);
	set("max_sen", 100);

	set("limbs", ({ "����", "ͷ��", "ǰ��", "����", }) );
	set("verbs",({"hoof","bite"}) );

	set("combat_exp", 250);
        set_temp("die", (: test :));

	setup();
}

void test()
{
  message("sound", "��������ǰ��������һ����\n", environment (this_object()));
}
