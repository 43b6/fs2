// beck.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set("no_get", 1);
	set_name("ˮ��",({"well"}) );
	set("long","һ����ʽ���ӵ�ˮ����\n");
	set("����",50);
	set("Һ��", ([
		"����": "ˮ",
		"����": "��ˮ",
		"ʣ": 300,
		"ֹ��" : 30,
		"drink_func":0,
	]) );
	setup();
}
