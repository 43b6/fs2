//ÿ��pill����ҩ��
//design by chan
inherit F_MEDICINE;
void create()
{
        set_name("���鵤", ({"sky pill","pill"}) );
        set("long",
                   "�����˴�˵�еĵ�ҩ,���лָ�����״̬��ҩЧ.\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
        set("value",7000);
        set("base_weight", 50);
        set("cure_type","all_atats");
        set("medicine_sick",120);
        set("eat_msg","$N��$n���º�, �������ܸ���״̬�������ˡ�\n");
        set_amount(1);
        setup();
}
