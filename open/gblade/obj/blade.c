//blade.c : ��

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("����",({"blade"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ�����Ƶ��� , �����߽������ɻ�ȱ֮�\n");
		set("value",400);
		set("material", "steel");
		set("wield_msg", "$N��������һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(15);

	setup();
}
