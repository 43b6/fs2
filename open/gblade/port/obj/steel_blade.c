// steelblade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�ֵ�", ({ "steel blade", "blade" }) );
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",800);
		set("material", "steel");
		set("long", "����һ���þ������ƶ��ɵĵ�������ʮ�ֵķ�����\n");
		set("wield_msg", "$N���һ��������$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(25);
	setup();
}
