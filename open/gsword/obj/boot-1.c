// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("�಼Ь",({"green boots","boots"}) );
        set_weight(3500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","��ͨ���಼��Ь.\n");
        set("unit","��");
        set("value",250);
	set("material","cloth");
        set("armor_type","boots");
        set("armor_prop/armor", 2);
	}
        setup();
}
