inherit NPC;

void create()
{
	set_name("�����", ({"black bear","bear"}));
	set("race", "Ұ��");
        set("age",20);
set("long", "һֻ��Ŀ�����Ĵ����,����ݺݵ�������.\n");
        set("str",30);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���" }));
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","friendly");
	set("kee",300);
	set("combat_exp",220);
	set("max_kee",300);
	setup();
}

