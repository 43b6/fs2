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
	set("combat_exp",418);
	set_temp("apply/armor", 20);
        set_temp("apply/attack", 7);
	set("random_move",3);
	set_skill("dodge",10);
	setup();               
	add_money("coin",50);

}

