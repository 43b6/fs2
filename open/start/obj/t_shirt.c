// t_shirt.c

inherit EQUIP;

void create()
{
	set_name("����", ({ "T-shirt","t-shirt","shirt"}) );
	set_weight(1200);
	      	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ��͸�����ʵĺ��������ʺϹ���ʱ���š�\n");
		set("unit", "��");
		set("value",200);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 4);
	}
        setup();
}
