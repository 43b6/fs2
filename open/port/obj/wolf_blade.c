// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;
				
void create()
{
	set_name("��������",({"wolf blade","blade"}));
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","�ϵȾ������ƶ��� , һֱ�������Ӹ���ͷ����������� .\n");
	set("value",3000);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		 set("unwield_msg", "$N�����е�$n�������� .\n");
	}
	init_blade(40);
	setup();
}
