inherit NPC;

void create()
{
	set_name("���", ({ "toad" }) );
	set("race", "Ұ��");
	set("age", 5);
	set("long", "һֻ���ĵ����.\n");
	set("str", 10);
	set("cor", 25);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp",100);
	set_temp("apply/armor", 10);
        set_temp("apply/attack", 3);
	set("random_move",2);
	set("chat_chance",10);
	set_skill("dodge",5);
	setup();               
	add_money("coin",10);

}

