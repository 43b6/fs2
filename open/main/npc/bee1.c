inherit NPC;

void create()
{
	set_name("Ұ��", ({ "bee" }) );
	set("race", "Ұ��");
	set("age", 1);
	set("long", "һֻ���ڲ��۵Ĵ�Ұ��.\n");
	set("str", 25);
	set("cor", 35);
        set("verbs", ({ "bite"}));
                set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
	set("combat_exp",535);
	set_temp("apply/armor", 20);
        set_temp("apply/attack", 20);
	set("random_move",2);
	set("chat_chance",10);
	set("chat_msg", ({
            (: "random_move" :),
	               }) );
	set_skill("dodge",20);
        set_skill("stabber",5);
	setup();               
	add_money("coin",100);

}

