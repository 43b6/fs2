// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("����ս��",({"robe"}) );
        set_weight(7000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","һ����ʿ�����õ�ս��,���ṩһЩ����.\n");
        set("unit","��");
        set("value",1000);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor", 7);
	set("armor_prop/dodge",1);
	set("armor_prop/parry", 1);
	}
        setup();
}
