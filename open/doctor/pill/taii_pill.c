//ÿ��pill����ҩ��
//design by chan
inherit F_MEDICINE;
void create()
{
        set_name("̫������", ({"taii pill","pill"}) );
        set("long",
                   "��������̫��ɽ�������,���Իָ���������.\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
        set("value",7000);
        set("base_weight", 50);
        set("cure_type","atman");
        set("medicine_sick",120);
        set("eat_msg","$N��$n���º�, �о����ϳ�����������\n");
        set_amount(1);
        setup();
}