inherit NPC;

void create()
{
        set_name("�ϻ�", ({"tiger"}));
	set("race", "Ұ��");
        set("age",20);
set("long", "һͷ���͵��ϻ�,�������ƺ�����ʲô�Ƶ�,������ĳ�����ȫ�����\n");
        set("str",30);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","friendly");
        set("kee",400);
	set("combat_exp",220);
        set("max_kee",400);
	setup();
}

