inherit NPC;

void create()
{
	set_name("ʨ��", ({ "lion" }) );
        set("race", "Ұ��");
	set("age", 5);
	set("long", "һֻ��׳��ʨ��.\n");
	set("str", 75);
        set("max_kee",400);
        set("kee",400);
        set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
        set("verbs", ({ "bite"}));
        set("combat_exp", 5500);
	set_temp("apply/armor", 60);
        set_temp("apply/attack", 30);
        set("attitude","aggressive");
	set_skill("dodge",50);
	setup();               
	add_money("coin",1000);

}

