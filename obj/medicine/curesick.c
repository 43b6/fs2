// ������ҽ�����ƴ���ҩ��
inherit F_MEDICINE;

void create()
{
        set_name("����¶", ({"ice heart pill","pill"}) );
	set("long","һ�ž�Ө��͸��ҩ��, ����ȥ��һ���������������������֡�\n");
	set("unit", "��");
	set("base_unit", "��");
        set("value", 1000);
        set("base_weight", 100);
	set("eat_msg","$N��$n���º�, ͷ�Ա�����Ѷ���, �ƺ����о�������ӡ�\n");
	set("cure_type","sick");
        set("medicine_power",80);
	set_amount(1);
	setup();
}

