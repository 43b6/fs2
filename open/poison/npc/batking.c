inherit NPC;

void create()
{
	set_name("������",( {"king bat","bat"}));
	set("race", "Ұ��");
	set("age",100);
	set("str",45);
      set("limbs", ({ "ͷ��", "����", "���" }));
        set("verbs", ({ "bite"}));
		
        set("attitude","friendly");
	set("combat_exp",689);
	set_skill("dodge",30);
	setup();
}

