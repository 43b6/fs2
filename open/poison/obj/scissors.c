#include <weapon.h>
#include <ansi.h>
inherit DAGGER;


void create()
{
	set_name("����", ({"scissors"}) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else{
		set("unit", "��");
		set("long", "����԰�������޼��������õĹ���.\n");
		set("value", 100);
		set("material", "steel");


	set("wield_msg", "$Nװ������������.\n");
	set("unwield_msg", "$N�����е�$n����.\n");
	}
	init_dagger(5);

	setup();
}
