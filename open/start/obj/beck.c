// beck.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set("no_get", 1);
	set_name("ˮ��",({"beck"}));
	set("long","һ������װ��ˮ��ˮ�ס�\n");
	set("����",50);
	set("Һ��", ([
		"����": "ˮ",
		"����": "��ˮ",
		"ʣ": 50,
		"ֹ��": 30,
	]) );
	setup();
}
