#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("�м���", ({ "trainee" }) );
	set("title", "������");
	set("gender", "����");
	set("long", "����ɱ�ֵ��м�����\n");
	set("age",12);
	set("attitude", "heroism");
	set("kee",500);
	set("max_kee",500);
	set("combat_exp",7000);
	setup();
}