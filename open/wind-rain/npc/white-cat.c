// peacock.c by roger

inherit NPC;

void create()
{
	set_name("���ײ�˹è ", ({ "white-cat","cat" }) );
	set("long",@LONG
         ��������ǰ¥���Ӳ�˹����
         ��è��, ʮ���ܵ������ǵ�
         ϲ��.
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
	"\n ���ײ�˹è���˸���Ƿ \n",
	}) );
		
	set("combat_exp",8000);
	setup();
	add_money("coin", 1);
}
