// trainee.c

inherit NPC;

void create()
{
	set_name("��ݵ���", ({ "trainee" }) );
	set("gender", "����" );
	set("age", 19);
	set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
        set("combat_exp",2000);
        set_temp("apply/attack",10);
        set_temp("apply/dodge",15);
	setup();
	carry_object(__DIR__"obj/linen")->wear();
}
