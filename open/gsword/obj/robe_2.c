// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("�������",({"robe"}) );
        set_weight(3500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","��ͨ��һ���������.\n");
        set("unit","��");
        set("value",700);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 6);
	}
        setup();
}
