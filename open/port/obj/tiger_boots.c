inherit EQUIP;
void create()
{
	set_name("�ݻ�ѥ",({"tiger boots","boots"}));
	set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�ɻ�Ƥ�Ƴ� , ���ṩ�ܺõķ����� , �������ݶ�
");
        set("unit", "˫");
	set("value",4000);
        set("material","cloth");
        set("armor_type", "boots");
	set("armor_prop/armor",5);
	set("armor_prop/move",3);
        set("armor_prop/dodge", 3);
        }
        setup();
}
