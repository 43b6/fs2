// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("��ƤСñ",({"little hat","hat"}) );
        set_weight(2500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ����ƤСñ.\n");
        set("unit","��");
        set("value", 350);
        set("material","cloth");
        set("armor_type","head");
	set("armor_prop/armor", 3);
	}
        setup();
}
