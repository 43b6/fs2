inherit NPC;

void create()
{
	set_name("ʨ��", ({"lion"}));
	set("race", "Ұ��");
        set("age",10);
	set("long", "����֮��,ʨ��,�����������Ļ�,���Ӱ�.\n");
        set("str",40);
	set("con",50);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","aggressive");
	set("cpmbat_exp",480);
	set("kee",400);
	set("max_kee",400);
	setup();
}

