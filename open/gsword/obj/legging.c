// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("���ֻ�ϥ",({"steel legging","legging"}) );
        set_weight(12000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","�þ��֠b�ɵĻ�ϥ,�����о�ϸ�ĵ��.\n");
        set("unit","��");
        set("value", 750);
        set("material","steel");
        set("armor_type","leggings");
	set("armor_prop/armor", 5);
	}
        setup();
}
