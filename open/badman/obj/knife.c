// knife.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("С��", ({ "knife" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 250);
		set("material", "iron");
		set("long", "һ�ѷ�����С�����ʺϽ�����ʱʹ�á�\n");
		set("wield_msg", "$N��$n���������С�\n");
		set("unwield_msg", "$N�����е�$n����ڴ��С�\n");
	}
	init_blade(5, SECONDARY);
	setup();
}
