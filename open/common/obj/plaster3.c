// ��ҩ by onion
inherit F_MEDICINE;
void create()
{
	set_name("����ʥ�ĸ�", ({ "heart plaster","plaster" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
	set("long","�����ϲ������ط��������ζ������������ˬ��ȴ����õ�����ʥƷ��\n");
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1000);
	set("value", 10000);
	set("cure_type","outheal");
	set("cure_heal_type","kee");
	set("medicine_power",125);
	set("medicine_times",30);
	}
	set_amount(1);
	setup();
}
