// nine_hat by roger

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("̫������֮��", ({"nine_hat", "hat"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long", "��˵�л�ɽ������֮�ڡ�\n");
	set("unit", "��");
	set("value", 70000);
	set("material", "steel");
	set("armor_prop/armor",9);
	}
	setup();
}
