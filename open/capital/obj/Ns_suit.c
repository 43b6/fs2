// kame_suit.c

inherit EQUIP;

void create()
{
        set_name("��ɫս��",({"soldier suit","suit"}) );
	set_weight(1500);
	set("gender_only", "����");
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","�������������Ʒ�����������һ�����ߡ�\n");
		set("unit", "��");
	set("value",1000);
	set("material","cloth");
	set("armor_type", "cloth");
        set("armor_prop/armor",6 );
	}
        setup();
}
