// gguard.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("�������", ({ "guard" }) );
	set("title", "���˹ȵڶ���С��");
	set("gender", "����");
	set("age", 25);
	set("attitude", "badman");
	set("long", "�㿴��һ����ͷ��������ӣ�����һ���������Ժ��һֱ��ע���㡣\n");
	set("combat_exp", 25000);
	set("str", 30);
	set("max_kee", 600);
	set("force", 300);
	set("max_force", 300);
	set("force_factor", 6);
	set_skill("force", 30);
	set_skill("blade", 45);
	set_skill("parry", 25);
	set_skill("dodge", 25);
	set_skill("move", 25);
	set_temp("apply/attack", 27);
	set_temp("apply/dodge", 17);
	setup();
	carry_object(BAD_OBJ"blade")->wield();
}
