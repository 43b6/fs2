// trainee.c

inherit NPC;

void create()
{
	set_name("��ݵ���", ({ "trainee" }) );
	set("gender", "����" );
	set("age", 19);
	set("long", "�㿴��һλ��ĸߴ�ĺ��ӣ���������ز����š�\n");
      set("combat_exp",4000);

        set_temp("apply/attack",10);
        set_temp("apply/dodge",15);
	setup();
	carry_object(__DIR__"obj/linen")->wear();
carry_object("/open/wu/obj/woodclaw")->wield();
carry_object("/open/gsword/obj/ff_pill");

carry_object("/open/gsword/obj/ff_pill");
}
