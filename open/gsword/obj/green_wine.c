// waterskin.c

inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set_name("��Ҷ��", ({"green wine","wine","green"}) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "��Ҷ���װ��һ����Ͳ����Լ���\n");
		set("unit", "Ͳ");
		set("value", 200);
		set("max_liquid", 15);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����": "��",
		"����": "��Ҷ���",
		"ʣ": 20,
		"ֹ��" : 22,
		"�ƾ��ɷ�": 10,
	]) );
	setup();
}
