inherit NPC;

void create()
{
        set_name("��β��", ({ "snake" }) );
	set("race", "Ұ��");
	set("age", 5);
        set("long", "һֻ��β��������������ȥ.\n");
	set("str", 25);
	set("cor", 25);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
	set("combat_exp", 1050);
	set_temp("apply/armor", 30);
        set_temp("apply/attack", 10);
	set("attitude","aggressive");
	set("random_move",2);
	set("chat_chance",10);
	set_skill("dodge",20);
	setup();               
	add_money("coin",100);

}

