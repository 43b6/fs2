//blade.c : ��

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("���µ�",({"moon blade","blade"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",8000);
		set("material", "steel");
		set("wield_msg", "$N��������һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(50);

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 50);
	set("ski_level2", 40);
	setup();
}
