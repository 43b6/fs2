// ҩ��

inherit F_MEDICINE;

void create()
{
	set_name("�󻹵�",({"large pill","pill"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","�󻹵�, ��ҩ���ϰ�ɼ�һ����������ҩ��, ����������ʮ�������ƶ��ɡ�\n");
		set("unit","��");
		set("base_unit","��");
		set("base_weight",500);
		set("value", 5000);
		set("cure_type","heal");
		set("cure_heal_type","kee");
		set("medicine_power",300);
                set("medicine_sick",40);
	}
        set_amount(1);
	setup();
}
