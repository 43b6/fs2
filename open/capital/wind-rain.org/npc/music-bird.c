// sparrow.c by oda
// use in /open/center by powell

inherit NPC;

void create()
{
	set_name("��ȵ", ({ "music-bird","bird" }) );
	set("long",@LONG
         ��֪���������������, ��
         ���ö����, ��ɫ��������
         ʮ��Ư��. 
LONG);
	set("race","Ұ��");
	set("age", 2);
	set("str", 8);
	set("con", 9);
	set("max_gin", 60);
	set("max_kee", 180);
	set("max_sen", 60);

	set("limbs", ({ "����", "���", "���", "�ҽ�", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );
	set("chat_chance", 4);
	set("chat_msg", ({
		"�ͨ衫���ͨ衫����\n",
	}) );
		
	set("combat_exp",4000);
	setup();
	add_money("coin", 1);
}
