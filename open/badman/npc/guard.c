// guard.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("������", ({ "guard" }) );
	set("title", "���˹ȵڶ���С��");
	set("gender", "����");
	set("age", 25);
	set("attitude", "badman");
	set("long", "�㿴��һ�������ɷ�����ӣ�����С������ĵ��ξ���Ĺ�����\n");
	setup();
	carry_object(BAD_OBJ"blade")->wield();
}
