// apron.c

inherit EQUIP;

void create()
{
	set_name("Χȹ", ({ "Apron", "apron" }) );
	set_weight(1000);
	set("gender_only", "Ů��");
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ����ͥ�������ŵ�Χȹ��\n");
		set("unit", "��");
		set("value", 250);
		set("material", "cloth");
		set("armor_type", "cloth");
		set("armor_prop/armor", 3);
		set("armor_prop/dodge", 1);
	}
        setup();
}
