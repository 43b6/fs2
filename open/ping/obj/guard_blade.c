//blade.c : ��
#include <weapon.h>
inherit BLADE;
void create()
{
        set_name("ɽկ���ƴ�",({"guard blade","blade"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","һ����ɽկ�����Լ���������ƴ󵶡�\n");
		set("value",1000);
		set("material", "steel");
		set("wield_msg", "$N��������һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(28);
	setup();
}
