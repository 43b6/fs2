inherit EQUIP;
void create()
{
	set_name("��ʽս��",({"guard armor","armor"}) );
	set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
��һƬƬС��Ƭ���Ӷ��� , �������� , ���߷�����Ч , 
ȴ��˶������˻�� , �Ƿ��ָ��������еķ��� .
");
        set("unit", "��");
	set("value",1500);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",10);
        set("armor_prop/dodge", -1);
        }
        setup();
}