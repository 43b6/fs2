// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("����",({"wide-brimmed rain hat","hat"}));
	set_weight(500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","�ɴֲ����� , �����ڹ⵲�� .\n");
        set("unit","��");
	set("value",100);
	set("material","cloth");
	set("armor_type","head");
	set("armor_prop/armor",1);
	}
        setup();
}
