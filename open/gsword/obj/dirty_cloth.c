// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("�������",({"dirty cloth","cloth"}) );
        set_weight(4500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ������Ĺ�������,����մ���˺����.\n");
        set("unit","��");
        set("value",150);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 2);
	}
        setup();
}
