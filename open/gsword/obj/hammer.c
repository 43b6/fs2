// sword.c : an example weapon

#include <weapon.h>

inherit HAMMER;

void create()
{
	set_name("����", ({"hammer" }));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "һ����������� .\n");
		set("value", 230);
		set("material", "iron");
	}
        init_hammer(10);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N �ó�һ��$n,���˳����� ,�������� ��\n");
	set("unwield_msg", "$N�����е�$n���뻳�С�\n");

// The setup() is required.

	setup();
}
