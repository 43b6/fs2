// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("����֮��",({"blademan armor","armor"}));
	set_weight(4000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","���뽭��֮������õĻ����䱸 .\n");
        set("unit","��");
	set("value",300);
	set("material","cloth");
	set("armor_type","armor");
	set("armor_prop/armor",3);
	}
        setup();
}
