inherit NPC;

void create()
{
	set_name("�۷�", ({"bee"}));
	set("race", "Ұ��");
        set("age",2);
set("long","һֻ���ڲ��۵��۷�\n");
        set("str",30);
      set("limbs", ({ "ͷ��", "����", "���" }));
        set("verbs", ({ "bite"}));
		
        set("attitude","friendly");
	set("combat_exp",200);
        set_skill("dodge",5);
	setup();
}

