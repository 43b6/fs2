// dumpling.c

inherit ITEM;
					
void create()
{
	set_name("���λ���", ({ "peanut" }) );
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ�����������ΰͣ��������ܺóԵĻ�����\n");
		set("unit", "��");
		set("value", 30);
		set("ʳ��", ([
                        "ʣ" : 10,       // ���ԳԼ���
                        "��Ӧ": 17,     // ÿһ������ӵ���
                ]) );
	}
        setup();
}
