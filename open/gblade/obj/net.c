// sword.c : an example weapon

#include <weapon.h>

 inherit STICK;

void create()
{
	set_name("������",({"net"}));
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ������ץ(cover)��������ߡ�\n");
		set("value",50);
		set("material", "wood");
		set("wield_msg", "$N �ó�һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������\n");
	}
	init_stick(3);
	setup();
}
