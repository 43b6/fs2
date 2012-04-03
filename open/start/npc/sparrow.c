// sparrow.c by oda

inherit NPC;

void create()
{
	set_name("С��ȸ", ({ "Sparrow", "sparrow" }) );
	set("race", "Ұ��");
	set("age", 2);
	set("long", "һֻ̰�Ե�С��ȸ��ֻ����Ѱ��ʳ���ȫ�����ڵ����˵Ĵ��ڡ�\n");
	set("str", 8);
	set("con", 9);
	set("max_gin", 60);
	set("max_kee", 60);
	set("max_sen", 60);

	set("limbs", ({ "����", "ͷ��", "���" }) );
	set("verbs", ({ "poke", "claw" }) );

	set("chat_chance", 6);
	set("chat_msg", ({
		"С��ȸ���ĵ��������ϵĵ��ݣ���ȫ�����µ����ӡ�\n"}) );
		
	set("combat_exp",0);

	setup();
}
