// dumpling.c

inherit ITEM;

void create()
{
	set_name("��������", ({ "dumpling" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ�����˴������ε�������ӡ�\n");
		set("unit", "��");
		set("value", 200);
		set("food_remaining", 3);
		set("food_supply", 100);
		set("ʳ��", ([
                        "ʣ" : 3,       // ���ԳԼ���
                        "��Ӧ": 100,     // ÿһ������ӵ���
                ]) );
	}
	setup();
}
