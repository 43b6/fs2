// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("��Ƥ��ϥ",({"wolf legging","legging"}));
	set_weight(1000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","����Ƥ�ƳɵĻ�ϥ , �����˫�ŵ����ݶ� .\n");
        set("unit","��");
	set("value",1500);
	set("material","cloth");
        set("armor_type","leggings");
	set("armor_prop/armor", 5);
	set("armor_prop/move",3);
	}
        setup();
}
