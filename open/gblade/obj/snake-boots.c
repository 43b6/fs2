inherit EQUIP;

void create()
{
        set_name("��ѥ",({"snake boots","boots"}) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
        set("long", "
�ɽ���ç��Ƥ�����ƶ��ɵģ�������˸�Ż�׻�����⣬����Ĳ�����
�㴩��֮���ж���ÿ���鶯��
\n");
        set("unit","��");
        set("value",600);
        set("material","cloth");
        set("armor_type","boots");
	set("armor_prop/armor", 2);
        set("armor_prop/dodge", 2);
        }
        setup();
}

