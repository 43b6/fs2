// dumpling.c

inherit ITEM;

void create()
{
	set_name("��ͷ", ({ "bread" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long", "һ�������硢�����ڵĴ���ͷ��\n");
		set("unit", "��");
		set("value", 15);
		set("ʳ��", ([
                        "ʣ" : 3,       // ���ԳԼ���
                        "��Ӧ": 60,     // ÿһ������ӵ���
                ]) );
	}
	setup();
}
