// knife.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("С����",({"small blade","blade"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 250);
		set("material", "iron");
		set("long","һ�ѷ�����С���� , �ʺ�����С����ʹ�� .\n");
		set("wield_msg", "$N��$n���������С�\n");
		set("unwield_msg", "$N�����е�$n����ڴ��С�\n");
	}
	init_blade(10);
	setup();
}
