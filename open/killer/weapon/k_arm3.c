inherit EQUIP;
void create()
{
        set_name("��ڤ�ۻ� ",({"ghost armband","armband"}) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long","��˵�˱ۻ�������Ҷ��ɱ��18��ʱ�������������У���ȡ�õ�\n");
        set("unit","��");
        set("value",10000);
        set("material","crimsonsteel");
        set("armor_type","armbands");
        set("armor_prop/armor",5);
        set("armor_prop/throwing",5);
        }
        setup();
}