// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("��������",({"blademan surcoat","surcoat"}));
	set_weight(500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","���뽭��֮������õĻ����䱸 .\n");
        set("unit","��");
	set("value",200);
	set("material","cloth");
	set("armor_type","cape");
	set("armor_prop/armor",2);
	}
        setup();
}
