inherit NPC;

void create()
{
	set_name("Ұ��", ({ "dog" }) );
	set("race", "Ұ��");
	set("age", 1);
	set("long", "һֻ��ʳ�е�Ұ��.\n");
	set("str", 15);
	set("cor", 30);
	set("limbs", ({ "ͷ��", "����", "β��", "��" }) );
	set("combat_exp",50);
	set_temp("apply/armor", 10);
	set("chat_chance",10);
	set("chat_msg", ({
	    (: this_object(),"random_move" :),
	               }) );
	set_skill("dodge",5);
	setup();               
	add_money("coin",10);

}

