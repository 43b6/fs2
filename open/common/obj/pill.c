
inherit F_MEDICINE;

void create()
{
        set_name("޲�ʵ�", ({"green pill","pill"}) );
	set("long",
"һ��޲�ʵ�,��������Ѫ,�����������(eat pill).\n"+
"(��������ʡ��: Ϊ����ҽ����·,���ƹ����ҩϰ��,����ҩ��һ�ɼ���ҩ��.)\n");
	set("unit", "��");
	set("base_unit", "��");
        set("value", 300);
        set("base_weight", 100);
	set_amount(1);
	set("cure_type","heal");
	set("cure_heal_type","kee");
	set("medicine_power",30);
set("medicine_sick",115);
	setup();
}

