//blade.c : ��

#include <weapon.h>

inherit STABBER;

void create()
{
	set_name("����",({"iron pen","pen"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "֧");
		set("long","������������ɵı� , ר������������֮�á�\n");
		set("value",400);
	set("material","iron");
		set("wield_msg", "$N�ӻ����ó�һֻ$n�������С�\n");
		set("unwield_msg", "$N�����е�$n�ս����\n");
	}
	init_stabber(12);
	setup();
}
