// peacock.c by roger

inherit NPC;

void create()
{
	set_name("С�ƹ�", ({ "yellow-dog","dog" }) );
	set("long",@LONG
         ��֪�������������С��, 
         ��Ϊʮ�ֿɰ�, ���Դ�Ҷ�
         �᲻�øϠ���.
LONG);
	set("race","Ұ��");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 370);
	set("max_sen", 60);

	set("limbs", ({ "��", "צ", "����", "β��", "����" }) );
        set("verbs", ({"bite","claw"}) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n ������������ \n",
	}) );
		
	set("combat_exp",9000);
	setup();
	add_money("coin", 1);
}
