inherit EQUIP;
void create()
{
	set_name("������սѥ",({"guard boots","boots"}));
	set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
����Ƥ�Ƴ� , �����ƶ��кܴ�İ��� , �ɽ���ֲ�
������ս�����ص�ȱ�� , Ϊ���ָ�������׼�䱸֮һ !
");
        set("unit", "˫");
	set("value",800);
        set("material","cloth");
        set("armor_type", "boots");
        set("armor_prop/armor",2);
        set("armor_prop/dodge", 3);
        }
        setup();
}
