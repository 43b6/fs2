
inherit NPC;

void create()
{
        set_name("ҹӥ", ({ "eagle" }) );
        set("long", "���Ǵ�������ߵȵ������ޡ�\n");
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
        set("combat_exp", 20000);
	setup();
        
}
