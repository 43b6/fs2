inherit NPC;

void create()
{
	set_name("������", ({"big snake","snake"}));
	set("race", "Ұ��");
        set("age",20);
set("long", "����,��ʮ�ߵĴ�����,����һ��˵����������һֻС��.\n");
	set("str",40);
	set("limbs", ({ "ͷ��", "����", "β��"}));
	set("verbs", ({ "bite"}));
		
        set("attitude","friendly");
	set("kee",400);
	set("con",50);
	set("combat_exp",480);
	set("max_kee",400);
	setup();
}

