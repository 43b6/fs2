// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("刀者之靴",({"blademan boots","boots"}));
	set_weight(500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","初入江湖之刀客最常用的基本配备 .\n");
        set("unit","件");
	set("value",200);
	set("material","cloth");
	set("armor_type","boots");
	set("armor_prop/armor",2);
	}
        setup();
}
