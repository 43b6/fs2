// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("���׻���",({"steel armband","armband"}) );
        set_weight(12000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","�������ƳɵĻ���,�����������Ļ���.\n");
        set("unit","��");
        set("value", 750);
        set("material","steel");
        set("armor_type","armbands");
	set("armor_prop/armor", 5);
	}
        setup();
}
