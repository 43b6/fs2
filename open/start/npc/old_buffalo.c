// old_buffalo.c by oda

inherit NPC;

void create()
{
	set_name("��ˮţ", ({ "Old buffalo", "buffalo" }) );
	set("race", "Ұ��");
	set("age", 20);
	set("long", "һֻ��������ˮţ����Ϊ���ù������������л��š�\n");

	set("str", 17);
	set("con", 15);
	set("max_gin", 120);
	set("max_kee", 110);
	set("max_sen", 100);

	set("limbs", ({ "����", "ͷ��", "ǰ��", "����", "β��" }) );
	set("verbs", ({ "hoof", "bite", "dunt" }) );

	set("chat_chance", 12);
	set("random_move",2);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"��ˮţ̧��ͷ�������㣬�����ֵ���ͷ�����Բ�ȥ�ˣ�һ��������������ӡ�\n"}) );
		
	set("combat_exp", 32);

	setup();
}
