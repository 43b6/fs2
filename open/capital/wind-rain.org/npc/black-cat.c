// peacock.c by roger

inherit NPC;

void create()
{
	set_name("��������è", ({ "black-cat","cat" }) );
	set("long",@LONG
         �����������͸����ǰ¥��
         ��è��, ���ع°�, ��¥��
         ����������.
LONG);
	set("race","Ұ��");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 300);
	set("max_sen", 60);

	set("limbs", ({ "��", "צ", "����", "β��", "����" }) );
        set("verbs", ({"bite","claw"}) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n ��������è����ؿ����� \n",
	}) );
		
	set("combat_exp",8000);
	setup();
	add_money("coin", 1);
}
