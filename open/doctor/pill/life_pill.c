inherit F_MEDICINE;

void create()
{
        set_name("������", ({"life pill","pill"}) );
        set("long",
"һ��������,��������Ѫ������,�����������(eat pill).\n"+
"(Щҩ�������Ŵ������,����ҽ��֮����,���������͡�\n");
        set("unit", "��");
        set("base_unit", "��");
        set("value", 300);
        set("base_weight", 100);
        set_amount(1);
        set("cure_type","heal");
        set("cure_heal_type","kee");
        set("medicine_power",50);
        set("medicine_sick",108);
        setup();
}
