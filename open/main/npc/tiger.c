inherit NPC;

void create()
{
	set_name("�ϻ�", ({ "tiger" }) );
        set("race", "Ұ��");
	set("age", 5);
	set("long", "һֻ�׶���ϻ�.\n");
	set("str", 65);
        set("max_kee",300);
         set("kee",300);
       set("limbs", ({ "ͷ��", "����", "ǰ��" , "���" , "β��" }) );

      set("verbs", ({ "bite"}));
        set("combat_exp", 4500);
	set_temp("apply/armor", 50);
        set_temp("apply/attack", 30);
	set("attitude","aggressive");
	set_skill("dodge",40);
	setup();               
	add_money("coin",500);

}

