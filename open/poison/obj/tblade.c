// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;
				
void create()
{
        set_name("��ͷ�ֵ�",({"steel blade","blade"}) );
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","���ǰѾ������ɵĳ��������˸���ͷ��װ�Ρ�\n");
		set("value",950);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_blade(40);
	setup();
}
