// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("��ͨ����",({"robe"}) );
        set_weight(4500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ����ͨ�ĳ���.\n");
        set("unit","��");
        set("value",550);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 3);
        set("armor_prop/dodge", 1);
	}
        setup();
}
