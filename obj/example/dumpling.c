// dumpling.c

inherit ITEM;

void create()
{
	set_name("����", ({ "dumpling" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ�������硢�����ڵĴ���ӡ�\n");
		set("unit", "��");
		set("value", 15);
		set("ʳ��", ([
                        "ʣ" : 3,       // ���ԳԼ���
                        "��Ӧ": 60,     // ÿһ������ӵ���
                ]) );
	}
	setup();
}
