// ҩ��

inherit F_MEDICINE;

void create()
{
                set_name("������",({"sen pill","pill"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","һ�ű��ɾ������ɵ��裬����Ч�����ѡ�\n");
                set("unit","��");
                set("base_unit","��");
                set("base_weight",300);
                set("value",1500);
                set("cure_type","heal");
                set("cure_heal_type","sen");
                set("medicine_sick",135);
                set("medicine_power",150);
        }
        set_amount(1);
        setup();
}
