// monkey.c by powell

inherit NPC;

void create()
{
        set_name("����", ({ "monkey" }) );
        set("long", "һֻ�ö��ĺ��ӣ���������������û��һ��ͣ��������\n");

	set( "age", 30);

        set("str", 30);
        set("cor", 30);

        set("combat_exp", 1000);

        set("race", "Ұ��");

        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );

        set("attitude", "friendly");

        set("chat_chance", 5);
        set("chat_msg", ({
		"С���ӣ�֨֨..֨֨...\n",
 		"С�����Ƕ���������, ͵͵����������������ߡ�\n",
 	}) );
	
        set_temp("apply/attack", 5);
        set_temp("apply/damage", 3);
        set_temp("apply/armor", 10);
	
	set_skill("dodge",30);
	set_skill("unarmed",30);
	
        setup();
}

