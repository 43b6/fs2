inherit EQUIP;

void create()
{
        set_name("��֮��ͳѥ",({"wind boots","boots"}) );
        set_weight(400);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","�������Ƶ�ѥ�ӣ����������ƵĲ�����Ƥ���֯���ɡ�\n");
        set("unit","˫");
        set("value", 1500);
        set("material","leather");
        set("armor_type","boots");
        set("armor_prop/armor", 1);
        }
        setup();
}        