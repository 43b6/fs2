// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("�ڸֲ˵�",({"steel knife","knife"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","�ɽ����� --- ����ר�ò˵� ��\n");
		set("value",600);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
	set("unwield_msg", "$N�����е�$n��������ĵ��� ��\n");
	}
	init_blade(27);
	setup();
}
