//ÿ��pill����ҩ��
//design by chan
inherit F_MEDICINE;
void create()
{
        set_name("���鵤", ({"human pill","pill"}) );
        set("long",
                   "�����˴�˵�еĵ�ҩ,��������������ҩЧ.\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
        set("value",7000);
        set("base_weight", 50);
        set("cure_type","heal_kee");
        set("medicine_sick",120);
        set("eat_msg","$N��$n���º�, �о������˺۶������ˡ�\n");
        set_amount(1);
        setup();
}
