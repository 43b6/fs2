// ironblade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("����", ({ "iron blade", "blade" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 250);
		set("material", "iron");
		set("long", "����һ�����ƵĴ󵶣�������ĵ����ϻ����˵��⡣\n");
		set("wield_msg", "$N���һ�Ѻ������$n�������С�\n");
		set("unwield_msg", "$N�����е�$n�ջ�����ĵ��ʡ�\n");
	}
	init_blade(5);
	setup();
}
