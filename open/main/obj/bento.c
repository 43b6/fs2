inherit ITEM;

void create()
{
	set_name("�㵱", ({ "bento" }) );
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ�������硢�����ڵĴ�㵱��\n");
		set("unit", "��");
		set("value", 200);
		set("weight",3000);
		set("ʳ��", ([
                        "ʣ" : 20,       // ���ԳԼ���
                        "��Ӧ": 80,     // ÿһ������ӵ���
                ]) );
	}
        setup();
}
