// hen.c by nako
// use in /open/start by nako

inherit NPC;

void create()
{
        set_name("ĸ��", ({ "hen" }) );
        set("long", "ũ�ҳ����ļ���, ���Ĵ�Ѱ����ʳ�\n");
	set("race","Ұ��");
        set("age", 5);
        set("str", 10);
	set("con", 9);
	set("max_gin", 60);
        set("max_kee", 80);
	set("max_sen", 60);

        set("limbs", ({ "���", "ͷ��", "����", "���", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );
	set("chat_chance", 4);
	set("chat_msg", ({
                "ĸ����������, ��Ȼ�ӵ�������һֻ���ӡ�\n",
	}) );
		
        set("combat_exp", 100);
	setup();
        carry_object("/open/start/obj/egg.c");
}
