// robe.c  by Airke
// QC by Anmy (98/2/25)

inherit EQUIP;

void create()
{
	set_name("��ʦ����", ({ "taolord robe", "robe" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 1000);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 13);
	}
	setup();
}

		
