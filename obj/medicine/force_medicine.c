inherit F_MEDICINE;

void create()
{
	set_name("������",({"force pill","pill"}));
	set_weight(80);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("base_unit", "��");
                set("base_weight", 100);		
		set("value", 500);
		set("cure_type","poison");
		set("cure_poison_type","ff_poison");
		set("medicine_power",1);
	}
	set_amount(1);
	setup();
}
