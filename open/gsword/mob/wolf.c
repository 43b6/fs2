inherit NPC;

void create()
{
        set_name("Ұ��", ({"wild wolf","wolf"}) );
	set("race", "Ұ��");
        set("age",10);
        set("long", "һֻ�����ꤵ�Ұ��\n");
        set("str",30);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","aggressive");
	set("combat_exp",220);
        set("kee",200);
        set("max_kee",200);
	setup();
}

