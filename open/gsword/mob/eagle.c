inherit NPC;

void create()
{
	set_name("��ӥ", ({"eagle"}));
	set("race", "Ұ��");
	set("age",10);
set("long","˫�۾�������Ĵ���ӥ,�߸ߵ�վ��֦ͷ�ϸ����ķ�.\n");
	set("str",25);
	set("limbs", ({ "ͷ��", "����","˫��" , "˫��"}));
	set("verbs", ({ "poke", "claw"}));
		
        set("attitude","friendly");
	set("kee",100);
	set("combat_exp",8000);
	set("max_kee",100);
	setup();
}

