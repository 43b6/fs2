inherit NPC;

void create()
{
	set_name("ɽè", ({"cat"}));
	set("race", "Ұ��");
	set("age",5);
set("long","ɭ���еĴ�ɽè,��������һ���˫צ.\n");
        set("str",30);
	set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
		
        set("attitude","friendly");
	set("kee",100);
	set("combat_exp",220);
	set("max_kee",100);
	setup();
}

