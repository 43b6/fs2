// ��ҩ by onion
inherit F_MEDICINE;
void create()
{
	set_name("ѩ����", ({ "snow plaster","plaster" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
	set("long","�ɾ���ҩ���з�������������ҩ, ������ʿ���޲����ڡ�\n");
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1000);
	set("value", 1500);
	set("cure_type","outheal");
	set("cure_heal_type","kee");
	set("medicine_power",50);
	set("medicine_times",13);
	}
        set_amount(1);
	setup();
}
