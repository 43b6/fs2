// dumpling.c

inherit ITEM;
								
void create()
{
	set_name("±��", ({ "egg" }) );
	set_weight(60);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ���ִ������±��������һ�ڰ����̵���\n");
		set("unit", "��");
		set("value", 10);
		set("ʳ��", ([
                        "ʣ" : 2,       // ���ԳԼ���
                        "��Ӧ": 30,     // ÿһ������ӵ���
                ]) );
	}
        setup();
}
