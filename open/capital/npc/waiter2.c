// /d/snow/npc/waiter.c
#include </open/capital/capital.h>  

inherit F_VENDOR;

void create()
{
	set_name("��С��", ({ "waiter" }) );
	set("gender", "����" );
	set("age", 22);
	set("long",
		"��λ��С����Ц������к����ˣ�����ʱ����ȥ�ʶ�������\n");
	set("combat_exp",110);
	set("attitude", "friendly");
	set("rank_info/respect", "С����");
	set("vendor_goods", ({
		"/obj/example/wineskin",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
		CAP_OBJ"tea",
	}) );
	setup();
}
