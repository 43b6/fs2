inherit EQUIP;

void create()
{
	set_name("��ͭս��",({"bronze robe","robe"}) );
	set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�Լ�ϸ�ĸ�˿��֯���ɵĳ��ۣ������Է��ڵ�Һ̬��ͭ��������˿������
���ķ�϶���㡣�����Ĺ�ͭɫ��ۣ������������Ļ�ɫ����
\n");
        set("unit", "��");
	set("value",1000);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",7);
        set("armor_prop/dodge", 1);
        }
        setup();
}
