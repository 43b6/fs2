// shau.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("������", ({ "shau mi mi", "shau", "mi" }) );
	set("nickname", "�����˲�����");
	set("gender", "Ů��");
	set("age", 37);
	set("long", "�㿴��һ����̬��ӯ������������ȹ���ޱ�б���Ŷ�ɽ�軨���ٸ���\n");
	set("attitude", "friendly");

	set("str", 23);
	set("cor", 23);
	set("int", 26);
	set("spi", 32);
	set("cps", 33);
	set("con", 21);
	set("per", 35);
	set("combat_exp", 500000);

	setup();
}
