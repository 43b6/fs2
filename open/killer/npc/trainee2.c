#include "/open/open.h"
inherit NPC;
void create()
{
	set_name("��ϰ��", ({ "trainee" }) );
	set("title", "������");
	set("gender", "����");
	set("long", "����ɱ�ֵ���ϰ����\n");
	set("age",12);
	set("attitude", "heroism");
	set("kee",450);
	set("max_kee",450);
	set("combat_exp",4000);
	setup();
}