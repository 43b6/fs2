// ҩ��

inherit F_MEDICINE;

void create()
{
	set_name("С����",({"small pill","pill"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","һ��С����,���������Ѫ,ֻҪ����(eat pill)���Ϳ����ˡ�\n");
		set("unit","��");
		set("base_unit","��");
		set("base_weight",300);
		set("value", 1500);
		set("cure_type","heal");
		set("cure_heal_type","kee");
		set("medicine_power",100);
                set("medicine_sick",18);
	}
        set_amount(1);
	setup();
}
