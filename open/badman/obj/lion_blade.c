// lion_blade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("ʨ��ս��", ({ "lion blade", "blade" }) );
	set_weight(12000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 4000);
		set("material", "steel");
		set("long", "����һ���޴��ս�����������������߳�������ٽһ���˿�������ʹ�ö���\n");
		set("wield_msg", "$N˫����ס���ϵĵ���������һ�Ὣ$n���˳����������С�\n");
		set("unwield_msg", "$N�����е�$n��ر���ĵ����С�\n");
	}
	init_blade(70, TWO_HANDED);
	setup();
}
