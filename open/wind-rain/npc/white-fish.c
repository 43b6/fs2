// peacock.c by roger

inherit NPC;

void create()
{
	set_name("������", ({ "white-fish","fish" }) );
	set("long",@LONG
         ����ǰ�ߴ�¥������������
         ��ϡ������, �����ε���ˮ
         ����Ϸ��.
LONG);
	set("race","Ұ��");
	set("age", 2);
	set("str", 6);
	set("con", 6);
	set("max_gin", 60);
	set("max_kee", 200);
	set("max_sen", 60);

	set("limbs", ({ "��", "��", "����", "����", "β��" }) );
        set("verbs", ({"bite"}) );
	set("chat_chance", 4);
	set("chat_msg", ({
	"\n       ��������������ˮ���Ρ���\n",
	}) );
		
	set("combat_exp",6000);
	setup();
	add_money("coin", 1);
}
