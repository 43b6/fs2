
inherit EQUIP;
													
void create()
{
	set_name("��˿��г���", ({ "red silkcloth", "cloth" }) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("armor_type", "cloth");
		set("value", 500);
		set("armor_prop/armor", 1);
	}
}
									