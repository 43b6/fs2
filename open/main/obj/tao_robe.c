// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("����",({"taoist robe","robe"}) );
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","һϯ��ɫ�ĳ��ۣ��ǵ�ʿ�ǳ������·���\n");
		set("unit", "��");
	set("value",3500);
	set("material","cloth");
		set("armor_type", "cloth");
	set("armor_prop/armor",20 );
        set("armor_prop/dodge", 2);
	}
        setup();
}
