// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("��ʿ��",({"gold blade","blade"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ�Ѽ�Ϊ�����Ĵ� , ���������\n");
		set("value",3500);
		set("material", "gold");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(45);

	set("ski_type1", "blade");
	set("ski_level1", 30);
	set("ski_type2", "gold-blade");
	set("ski_level2", 20);

	setup();
}
