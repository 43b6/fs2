inherit EQUIP;
void create()
{
        set_name("�ɺ�ѥ",({"monkey boots","boots"}));
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","
�ɺ�Ƥ�Ƴ� , ���ṩ����ķ����� , �������ݶ�
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

