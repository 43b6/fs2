// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("ľ���ֻ�",({"wood wrists","wrists"}) );
        set_weight(4500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","ľ�Ƶ��ֹ�ľ��,�����ṩЩ��ı���.\n");
        set("unit","��");
        set("value", 250);
        set("material","wood");
        set("armor_type","wrists");
	set("armor_prop/armor", 2);
	}
        setup();
}
