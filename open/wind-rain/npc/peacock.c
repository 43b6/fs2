// peacock.c by roger

inherit NPC;

void create()
{
	set_name("��ȸ", ({ "peacock" }) );
	set("long",@LONG
       �߲���Ŀ�ȸ���Ķ��Š���
       ˫��, �Ĵ��ε���.
LONG);
	set("race","Ұ��");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 200);
	set("max_sen", 60);

	set("limbs", ({ "����", "��ë", "���", "�ҽ�", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n��ȸ�ſ�������������ë����\n",
	}) );
		
	set("combat_exp",5000);
	setup();
	add_money("coin", 1);
}
