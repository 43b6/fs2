// kame_suit.c

inherit EQUIP;

void create()
{
    set_name("����֮��",({"blademan shield","shield"}));
	set_weight(2000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","���뽭��֮������õĻ����䱸 .\n");
        set("unit","��");
	set("value",300);
	set("material","steel");
	set("armor_type","shield");
	set("armor_prop/armor",2);
	set("armor_prop/parry",1);
	}
        setup();
}
