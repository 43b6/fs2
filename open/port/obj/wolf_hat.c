// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("��ͷ��",({"wolf hat","hat"}));
	set_weight(500);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","����Ƥ���� , ���в���ķ����� .\n");
        set("unit","��");
	set("value",1000);
	set("material","cloth");
	set("armor_type","head");
	set("armor_prop/armor",5);
	}
        setup();
}
