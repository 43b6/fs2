// ��ҩ by onion
inherit F_MEDICINE;
void create()
{
	set_name("��ҩ", ({ "plaster" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else
	{
	set("long","�������˵�Ѱ��ҩƷ, ���Է����˿���, �����߽�������ȱ�ٵıر�Ʒ��\n"+
		"\t�÷� : apply plaster [at <target>]\n");
	set("unit", "��");
	set("base_unit", "��");
	set("base_weight", 1000);
	set("value", 800);
	set("cure_type","outheal");
	set("cure_heal_type","kee");
	set("medicine_power",20);
	set("medicine_times",8);
	}
	set_amount(1);
	setup();
}
