// hen.c by nako
// use in /open/start by nako

inherit NPC;

void create()
{
        set_name("�ȱ���", ({ "bird" }) );
        set("long", "���Ǵ�������͵ȵ������ޡ�\n");
	set("race","Ұ��");	 
	set("max_gin", 1000000);
        set("max_kee", 1000000);
	set("max_sen", 1000000);
        set("gin", 1000000);
        set("kee", 1000000);
        set("sen", 1000000);
        set_temp("apply/armor",2);
        set("limbs", ({ "���", "ͷ��", "����", "���", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );		
        set("combat_exp", 1000);
	setup();      
}
