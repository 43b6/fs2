inherit NPC;

void create()
{
 	set_name("��Ѫ����", ({"blood bat","bat"}));
	set("race", "Ұ��");
        set("age",2);
set("long", "ģ���ֲ�����Ѫ����,����Ĺ����κ���.\n");
        set("str",30);
      set("limbs", ({ "ͷ��", "����", "���" }));
        set("verbs", ({ "bite"}));
		
        set("attitude","aggressive");
	set("combat_exp",220);
        set_skill("dodge",5);
	set_temp("apply/attack",10);
	setup();
}

