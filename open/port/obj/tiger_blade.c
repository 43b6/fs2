// sword.c : an example weapon

#include <weapon.h>

inherit BLADE;
				
void create()
{
	set_name("��ͷ����",({"tiger blade","blade"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","�ɾ������� , �ǳ����� , ��������ͷ��װ�� .\,
 ����Ⱦ�������ܵ���Ѫ .\n");
		set("value",10000);
		set("material", "steel");
		set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
		 set("unwield_msg", "$N�����е�$n�������� .\n");
	}
	init_blade(60);
	setup();
}
