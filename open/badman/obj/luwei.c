// luwei.c

inherit ITEM;

void create()
{
	set_name("±ζ", ({ "lu wei", "lu", "wei" }) );
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ�������磬���˿�ˮֱ����±ζ��\n");
		set("unit", "��");
		set("value", 100);
		set("ʳ��", ([
                        "ʣ" : 4,       // ���ԳԼ���
                        "��Ӧ": 50,     // ÿһ������ӵ���
                ]) );
	}
	setup();
}
