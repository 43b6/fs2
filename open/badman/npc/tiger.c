// tiger.c

inherit NPC;

void create()
{
	set_name("ĸ�ϻ�", ({ "big tiger", "tiger" }) );
        set("race", "Ұ��");
	set("age", 5);
	set("long", "һֻ�׶���ϻ���\n");
	set("str", 65);
	set("cor", 65);
	set("max_kee", 200);
	set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );
	set("verbs", ({ "bite"}));
	set("combat_exp", 20000);
	set_temp("apply/damage", 30);
	set_temp("apply/dodge", 50);
	set_temp("apply/armor", 30);
	set_temp("apply/attack", 50);
	set("attitude","aggressive");
	set_skill("dodge",40);
	setup();               
}
