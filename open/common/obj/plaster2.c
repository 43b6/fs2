// ��ҩ by onion
inherit F_MEDICINE;
void create()
{
	set_name("���������", ({ "spicy plaster","plaster" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
	set("long","��ںڸ�ҩ, ����һ��������ζ��, ��ȴ������һ�����������Ч��ҩ�ࡣ\n");
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1000);
	set("value", 3000);
	set("cure_type","outheal");
	set("cure_heal_type","kee");
	set("medicine_power",70);
	set("medicine_times",16);
	}
        set_amount(1);
	setup();
}
