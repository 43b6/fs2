inherit NPC;

void create()
{
	set_name("��Ұ��",({"boar"}));
	set("race", "Ұ��");
	set("age",10);
set("long","�ʷ����ֵ�Ұ��,������ͦ�ɰ���.\n");
	set("str",20);
	set("con",30);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���"}));
	set("verbs", ({ "bite", "claw"}));
		
        set("attitude","friendly");
	set("kee",100);
	set("combat_exp",160);
	set("max_kee",200);
	set("kee",200);
	setup();
}

