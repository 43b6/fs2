inherit EQUIP;
void create()
{
        set_name("���߻��� ",({"nija armband","armband"}) );
        set_weight(4000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","����ɱ�ֵĻ���װ������Ϊϡ��ƽ����װ��");
        set("unit","��");
        set("value",6000);
        set("material","silver");
        set("armor_type","armbands");
        set("armor_prop/armor", 4);
        set("armor_prop/parry", 3);
        }
        setup();
}