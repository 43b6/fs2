inherit EQUIP;

void create()
{
        set_name("[36m�ٶȽ�ָ[0m",({"speed ring","ring"}) );
        set_weight(1500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","������а�������ز��ı�ʯ���Ƴɣ����Ϻ��������߲���������ʹ����ƶ��ٶȼӿ졣\n");
        set("unit","��");
        set("value", 10000);
        set("material","gem");
        set("no_sell",1);
        set("armor_type","finger");
        set("armor_prop/move",3);
        set("armor_prop/dodge",3);
        set("armor_prop/armor", -5);
        }
        setup();
}        
