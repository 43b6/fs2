// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("һƷ�ٷ�",({"officer suit","suit"}) );
        set_weight(5000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","���ǳ�͢��һƷ�ٷ�,�㿴�������Ž�˿���,�������Ľ��廨��.\n");
        set("unit","��");
        set("value",25000);
	set("material","cloth");
        set("armor_type","cloth");
         set("armor_prop/armor", 20);
        set("armor_prop/dodge", 5);
        set("armor_prop/attack",3);
	}
        setup();
}
