// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("¹Ƥѥ",({"deer boots","boots"}) );
        set_weight(3500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","¹Ƥ�Ƶ�ѥ��.\n");
        set("unit","��");
        set("value",600);
	set("material","cloth");
        set("armor_type","boots");
        set("armor_prop/armor", 5);
        set("armor_prop/dodge", 1);
	}
        setup();
}
