// trainee.c

inherit NPC;

void create()
{
	set_name("��ݵ���", ({ "trainee" }) );
	set("gender", "����" );
	set("age", 19);
	set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
	set("combat_exp", 100);
	setup();
	carry_object("/d/snow/obj/linen")->wear();
}
