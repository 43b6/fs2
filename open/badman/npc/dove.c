// dove.c by powell

inherit NPC;

void create()
{
        set_name("����", ({ "dove" }) );
        set("long", "һֻ��ѵ�ĺ�ƽ��, �����Š���Բ�������۾������㡣\n");

	set("race","Ұ��");
	set("age", 2);
	set("str", 8);
	set("con", 9);
	set("max_gin", 60);
	set("max_kee", 60);
	set("max_sen", 60);

	set("limbs", ({ "����", "���", "���", "�ҽ�", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );
	set("chat_chance", 4);
	set("chat_msg", ({
                "��ƽ��գգ�����۾�, ������ ���� �Ľ��š�\n",
	}) );
		
        set("combat_exp",160);
	setup();
}
