// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("����֮��",({"blademan cloth","cloth"}));
	set_weight(1000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","���뽭��֮������õĻ����䱸 .\n");
        set("unit","��");
	set("value",400);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor",3);
	set("armor_prop/dodge",1);
	}
        setup();
}
