inherit EQUIP;

void create()
{
        set_name("�������",({"emery belt","belt"}));
        set_weight(1300);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","���ɰ��Ƥ����ƶ��ɵ�����, ������ǿ�����ķ�����.\n");
        set("unit","��");
        set("value",10000);
        set("material","steel");
        set("armor_type","waist");
        set("armor_prop/armor", 2);
        }
        setup();
}                        