#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("������ϰ��", ({ "trainee" }) );
	set("title", "������");
	set("gender", "����");
	set("long", "����ɱ�����¼�����ϰ����\n");
	set("age",12);
	set("attitude", "heroism");
	set("kee",400);
	set("max_kee",400);
	set("combat_exp",1000);
	setup();
}