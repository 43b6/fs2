//blade.c : ��
#include <weapon.h>
inherit BLADE;
void create()
{
	set_name("��ͷ��",({"ghost blade","blade"}));
	set_weight(12000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ�Ѻ�ɫ�ڸִ� , ����һ����Ŀ�����Ĺ�ͷ , ��Ϊ���ˡ�\n");
		set("value",2000);
		set("material", "steel");
		set("wield_msg", "$N��������һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(40);
	setup();
}