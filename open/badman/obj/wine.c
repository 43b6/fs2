// wine.c

inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set_name("�׸�", ({ "wine" }) );
	set_weight(700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ���㴼�İ׸ɣ��������ҵĺܡ�\n");
		set("unit", "��");
		set("value", 150);
		set("����", 15);
	}

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("Һ��", ([
		"����": "��",
		"����": "�׸�",
		"ʣ": 15,
		"ֹ��" : 30,
		"drunk_apply": 9,
	]) );
	setup();
}
