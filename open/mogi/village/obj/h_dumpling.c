
inherit ITEM;

void create()
{
	set_name("������հ�", ({ "dumpling" }) );
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ���Ĵ�İ���, ��˵����������������.\n");
		set("unit", "��");
		set("value", 30);
		set("ʳ��", ([
                        "ʣ" : 5,       // ���ԳԼ���
                        "��Ӧ": 70,     // ÿһ������ӵ���
                ]) );
	}
	setup();
}
