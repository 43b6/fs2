inherit NPC;

void create()
{
        set_name("����", ({"bat"}));
	set("race", "Ұ��");
        set("age",2);
set("long", "һֻ��ɫ��С����,��������۸��ĺö����..:P\n");
        set("str",30);
      set("limbs", ({ "ͷ��", "����", "���" }));
        set("verbs", ({ "bite"}));
		
        set("attitude","friendly");
	set("combat_exp",220);
        set_skill("dodge",5);
	setup();
}

