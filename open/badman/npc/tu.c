// tu.c by oda

#include </open/open.h>

inherit NPC;

void create()
{
	set_name("������", ({ "tu jau jau", "tu", "jau" }) );
	set("nickname", "���в�Ů");
	set("class", "bandit");
	set("attitude", "peaceful");
	set("gender", "Ů��");
	set("age", 39);
	set("long", "�����ڻ�������ǰ������˾����Ǹ���Ů���������ӣ�����������ԶҲ\n�㲻�壬��Ϊ���������������������µ�һ���������ܿ�����������Ŀ��\n");

	set("str", 25);
	set("cor", 26);
	set("int", 35);
	set("spi", 25);
	set("cps", 30);
	set("con", 22);
	set("per", 35);
	set("combat_exp", 600000);

	setup();
	add_money("gold", 10);
}
