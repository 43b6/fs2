// blade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("��", ({ "blade" }) );
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 800);
		set("material", "iron");
		set("long", "����һ�����صĴ󵶣���������һ�����ʹ�����������硣\n");
		set("wield_msg", "$N���һ�����λε�$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(20);
	setup();
}
