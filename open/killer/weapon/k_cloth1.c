inherit EQUIP;
void create()
{
set_name("ɱ����ϰ��",({"trainee cloth","cloth"}));
set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","ɱ�ֵĻ���װ����������������");
        set("unit", "��");
        set("value",5000);
        set("material","steel");
        set("armor_type", "cloth");
        set("armor_prop/armor",10);
        set("armor_prop/dodge",6);
        set("armor_prop/parry",4);
        }
        setup();
}