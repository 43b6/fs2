inherit NPC;

void create()
{
	set_name("�۷�", ({ "bee" }) );
	set("race", "Ұ��");
	set("age", 1);
	set("long", "һֻ���ڲ��۵��۷�.\n");
	set("str", 15);
	set("cor", 25);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
	set("combat_exp",150);
	// �趨 random_move ���뿪�ҵĲ���
	set("random_move",5);
	set("chat_chance",10);
	set("chat_msg", ({
	    (: this_object(),"random_move" :),
	               }) );
	set_skill("dodge",10);
	setup();               

}

