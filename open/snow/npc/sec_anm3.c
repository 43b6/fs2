// celes_tiger.c

inherit NPC;

void create()
{
           set_name("�׷���ħ",({"wolf"}));
      set("title","ʥ��");
	set("long",
         "���ǿ���ѩȪ����ʥ��֮�ס��׷���ħ����\n"
    );

	set("race", "Ұ��");
	set("age", 160);
       set("attitude","aggressive");

	set("max_gin", 2000);
        set("max_kee",200);
	set("max_sen", 1000);

	set("str", 110);
	set("cor", 40);
	set("spi", 40);
	set("int", 60);

	set("limbs", ({ "ͷ��", "����", "ǰ��", "����", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );

         set_skill("dodge",20);
	set_temp("apply/attack", 80);
	set_temp("apply/damage", 160);
	set_temp("apply/armor", 20);

	set("combat_exp",99347);
	set("score", 100000);
	setup();
}
