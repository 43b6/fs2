// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("�������",({"green robe","robe"}) );
        set_weight(6500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","ʹ����������֮Ƥ���ƳɵĻ���,���ṩ�ܺõı���.\n");
        set("unit","��");
        set("value",2500);
	set("material","cloth");
        set("armor_type","cloth");
        set("armor_prop/armor", 20);
        set("armor_prop/dodge", -4);
	}
        setup();
}
