
inherit NPC;

void create()
{
        set_name("������", ({ "bird" }) );
        set("long", "���Ǵ�����ε͵ȵ������ޡ�\n");
	set("race","Ұ��");
        set("age", 5);
        set("str", 10);
	set("con", 9);	
	set("max_gin", 1000000);
        set("max_kee", 1000000);
	set("max_sen", 1000000);
        set("gin", 1000000);
        set("kee", 1000000);
        set("sen", 1000000);
        set("limbs", ({ "���", "ͷ��", "����", "���", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );		
        set("combat_exp", 10000);
	setup();
        
}
