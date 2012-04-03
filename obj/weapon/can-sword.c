// sword.c : an example weapon
#include <ansi.h>
#include <weapon.h>

inherit SWORD;

void create()
{
	set_name(HIC "�ɽ�֮��" NOR,({"can sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",30000);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_sword(80);
	setup();
}
