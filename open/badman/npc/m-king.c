// m-king.c by powell

inherit NPC;

void create()
{
        set_name("������", ({ "monkey king", "king" }) );
        set("long", "һֻ����Ĵ���ӣ�վ�������㻹�ߡ�\n"+
                    "������������е��쵼�ߡ�\n");

	set( "age", 150);

        set("str", 130);
        set("cor", 30);

	set( "force_factor", 3 );
	set( "force", 1000 );
	set( "max_force", 1000);

        set("combat_exp", 10000);

        set("race", "Ұ��");

        set("limbs", ({ "ͷ��", "����", "ǰ��", "���", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );

        set("attitude", "friendly");

        set("chat_chance", 2);
        set("chat_msg", ({
		"֨֨..֨֨...\n",
		"�������Ŵ󠭵�˫��, �������㡣\n",
 		"������������֨֨�Ľ��˼���, ����Ҫ������Щ��ô..\n",
        }) );
	
        set_temp("apply/attack", 15);
        set_temp("apply/damage", 6);
        set_temp("apply/armor", 20);
	
	set_skill("dodge",80);
	set_skill("unarmed",80);
	
        setup();
}

