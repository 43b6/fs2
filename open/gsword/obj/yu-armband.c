// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("���񻤱�",({"yu armband","armband"}) );
        set_weight(12000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","�������ϵȺ����ƳɵĻ���,�����������Ļ���\n");
        set("unit","��");
        set("value", 200000);
        set("material","steel");
        set("armor_type","armbands");
	set("armor_prop/armor", 7);
	}
        setup();
}
