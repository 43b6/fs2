// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("普通长袍",({"robe"}) );
        set_weight(4500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","一件普通的长袍.\n");
        set("unit","件");
        set("value",550);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 3);
        set("armor_prop/dodge", 1);
	}
        setup();
}
