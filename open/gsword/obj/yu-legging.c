// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("����ϥ",({"yu legging","legging"}) );
        set_weight(2500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","����Ӳ����ߵĺ������Ƴɣ���������\n");
        set("unit","��");
        set("value", 200000);
        set("material","steel");
        set("armor_type","leggings");
	set("armor_prop/armor",7);
	}
        setup();
}
