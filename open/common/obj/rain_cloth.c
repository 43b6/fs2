// rain_cloth.c

inherit EQUIP;

void create()
{
	set_name("���������", ({ "rain cloth", "cloth" }) );
	set_weight(1200);
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ��͸�����ʵ����£����ʺ�����ʱ���š�\n");
		set("unit", "��");
		set("value",30);
		set("material", "ëƤ");
		set("armor_type", "cloth");
		set("rain_cover",100);
		set("armor_prop/armor", 4);
	}
        setup();
}
