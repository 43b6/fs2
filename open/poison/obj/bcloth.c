// mask.c

inherit EQUIP;

void create()
{
	set_name("ҹ����", ({"black suit", "suit"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ����ɫ��ҹ���¡�\n");
		set("value", 500);
	set("armor_prop/armor", 10);
 

		set("material", "cloth");
		set("armor_type", "cloth");
	set("armor_prop/dodge", 2);
		set("unit", "��");
		set("armor_prop/id",({"night stalker","stalker"}) );
		set("armor_prop/name", ({"ҹ����"}) );
		set("armor_prop/short", ({"ҹ����(night stalker)"}) );
		set("armor_prop/long", ({
	   "һ������ҹ���µ��������\n"
		}) );
	}
}
