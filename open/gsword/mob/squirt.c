inherit NPC;

void create()
{
	set_name("����", ({ "squirt" }) );
	set("race", "Ұ��");
	set("age", 3);
	set("long", "һֻ��������β�͵�����.\n");
	set("str", 25);
	set("cor", 30);
	set("limbs", ({ "ͷ��", "����", "β��", "��" }) );
        set("verbs", ({ "bite" }) );
        set("combat_exp", 35);
	set_temp("apply/armor", 15);
	set("chat_chance",10);
	set("chat_msg", ({
	    (: this_object(),"random_move" :),
	               }) );
	set_skill("dodge",20);
	set_skill("unarmed",2);
	setup();               
	add_money("coin",10);
	
}

