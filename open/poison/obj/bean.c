inherit ITEM;

void create()
{
	set_name("���㶹",({"bean"}) );
	set_weight(100);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ�̸ճ��õ��㶹��������С��������ʲ����ˡ�\n");
		set("unit","��");
		set("value",30);
		set("ʳ��", ([
                        "ʣ" : 10,       // ���ԳԼ���
                        "��Ӧ": 18,     // ÿһ������ӵ���
                ]) );
		}
	setup();
}
