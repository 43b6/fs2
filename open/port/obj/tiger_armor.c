inherit EQUIP;
void create()
{
	set_name("�׻�֮��",({"tiger armor","armor"}));
	set_weight(10000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
���ϵȾ������ڰ׻�Ƥ�� , ��������ǿ��ķ�������
���ֲ��˺��ز����ȱ�� , Ϊ�ǳ�����֮���� .
");
        set("unit", "��");
	set("value",15000);
        set("material","steel");
	set("armor_type", "cloth");
	set("armor_prop/armor",20);
        }
        setup();
}
