// needle.c

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("С����", ({ "silver needle", "needle" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "֧");
		set("base_unit", "֧");
		set("value", 1500);
		set("material", "silver");
		set("long", "����һ֧ҽ��ר�õ����룬�������ʹ�ü��ɵĻ������ɷ��ӳ������������\n");
		set("wield_msg", "ֻ������һ����$N�������Ѿ�����һ֧$n��\n");
		set("unwield_msg", "$N�����е�$n����������\n");
	}
	init_throwing(40);
	set_amount(1);
	setup();
}
