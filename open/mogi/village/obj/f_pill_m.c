// made by ccat
//��дԭ����pill....����ҩ��....     adapt by eva
// ���¸�д.����ҩ��..bye chan
inherit F_MEDICINE;
void create()
{
        set_name("ħѪ��", ({"force pill","pill"}) );
        set("long","ħ�������ҩ���ƶ��ɵĵ�ҩ, ������ɫ��Ѫ������.
��˵���ú��������������.\n");
        set("unit", "��");
        set("base_unit", "��");
        set("value",50000);
        set("base_weight", 50);
        set("cure_type","force");
        set("medicine_sick",125);
        set("eat_msg","$N��$n���º�, �о�����ӿ��ԴԴ���ϵ�����,˲ʱ����������\n");
        set_amount(1);
        setup();
}
