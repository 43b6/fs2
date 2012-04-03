// octopus.c by powell

inherit NPC;

void create()
{
      set_name("������",({"big octopus","octopus"}));
	set("long",
             "�ۣ�����һֻ��צ�Ĵ����㣬���ų����Ĵ��֣��ɵ�С��һ�㣬\n"+
             "�ɱ���ˠ��ĸ����\n"
    );

	set("race", "Ұ��");
	set("age", 200);
        set("attitude","aggressive");

	set("max_gin", 1000);
        set("max_kee",500);
	set("max_sen", 1000);

	set("str", 60);
	set("cor", 40);
	set("spi", 40);
	set("int", 60);

	set("limbs", ({ "ͷ��", "����", "����" }) );
	set("verbs", ({ "bite", "claw" }) );

        set_skill("dodge",30);

        set_temp("apply/attack", 20);
        set_temp("apply/damage",30);
        set_temp("apply/armor", 80);

	set("combat_exp",99340);
	set("score", 100000);
	setup();
}
