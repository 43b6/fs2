inherit EQUIP;

void create()
{
        set_name("��������",({"kylin belt","belt"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","��ȡѪ����Ľ�������Ƥ���֯���ɵ����� , ����ǿ����ķ����� .\n");
        set("unit","��");
        set("value",50000);
        set("material","leather");
        set("armor_type","waist");
        set("armor_prop/armor", 5);
        }
        setup();
}                        