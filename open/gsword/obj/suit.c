// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("��ɫС��",({"white suit","suit"}) );
        set_weight(4500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ����ɫ����ͨ����,���������ǵ�̯��.\n");
        set("unit","��");
        set("value",350);
	set("material","cloth");
        set("armor_type","cloth");
        set("armor_prop/armor", 4);
        set("armor_prop/dodge", 1);
	}
        setup();
}
