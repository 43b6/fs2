// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("����",({"soldier blade","blade"}) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","һ����ͨ�ľ�����\n");
		set("value",600);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_blade(20);
	setup();
}
