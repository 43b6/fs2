// waterskin.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("Ů����", ({"girl red wine","wine","red"}) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "Ů��������װ��һ����«����Լ���\n");
		set("unit", "̳");
		set("value", 200);
		set("max_liquid", 15);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����": "��",
		"����": "Ů�����",
		"ʣ": 15,
		"ֹ��" : 20,
		"�ƾ��ɷ�": 12,
	]) );
	setup();
}
