// made by ccat
// refix by onion
// refix by chan
// ����ҩ��
inherit F_MEDICINE;
void create()
{
        set_name("��֥�ɵ�", ({"super pill","pill"}) );
        set("long",
"���������н�������ɽ������֮��ҩ,ר��Ѫ��ʧ��.\n"+
"��Ҫ�뾭ҩʦ����(check item),����ʳ��(eat pill).\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
          set("value",20000);
        set("base_weight", 50);
        set("cure_type","poison");
        set("cure_poison_type","ff_poison");
        set("medicine_sick",120);
        set_amount(1);
       set("medicine_power",5);
        setup();
}

