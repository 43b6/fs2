inherit NPC;

void create()
{
	set_name("����", ({ "butterfly" }) );
	set("race", "Ұ��");
	set("age", 1);
	set("long", "һֻ�������Ĳʵ�.\n");
	set("str", 15);
	set("cor", 25);
	set("limbs", ({ "ͷ��", "����", "���", "����" }) );
        set("verbs", ({ "bite" }) );
	set("combat_exp",118);
	set_temp("apply/armor", 10);
	set("chat_chance",10);
	set("chat_msg", ({
	    (: this_object(),"random_move" :),
	               }) );
	set_skill("dodge",5);
	setup();               
	add_money("coin",10);

}

