// kame_suit.c

inherit EQUIP;

void create()
{
	set_name("ѩ����",({"wolf cloth","cloth"}));
	set_weight(1000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long","�ɺ�����ѩ��Ƥ���Ƴ� , ��Ϊ��� , ���������ܴ�����
���ݶ� .\n");
        set("unit","��");
	set("value",5000);
	set("material","cloth");
        set("armor_type","cloth");
	set("armor_prop/armor",10);
	set("armor_prop/dodge",5);
	set("armor_prop/move",3);
	}
        setup();
}
