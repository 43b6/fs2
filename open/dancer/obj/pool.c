// beck.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set("no_get", 1);
	set_name("��ˮ��",({"pool"}));
	set("long","һ�����ű��µ���ˮ�ء�\n");
	set("����",50);
	set("Һ��", ([
		"����": "ˮ",
		"����": "��ˮ",
		"ʣ": 100000,
		"ֹ��" : 30,
		"drink_func":0,
	]) );
	setup();
}
