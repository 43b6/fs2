// made by ccat
// refix by chan
// ����ҩ��
inherit F_MEDICINE;
void create()
{
        set_name("ѩ����", ({"force pill","pill"}) );
        set("long",
"���������н�������ɽ��������֮��ҩ,���Իָ���������.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(eat pill).\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
       set("value",30000);
        set("base_weight", 50);
        set("cure_type","force");
        set("medicine_sick",125);
        set("eat_msg","$N��$n���º�, �о�����ӿ��ԴԴ���ϵ�����,˲ʱ����������\n");
        set_amount(1);
        setup();
}
