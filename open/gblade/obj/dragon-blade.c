//blade.c : ��
#include <ansi.h>
#include <weapon.h>

inherit BLADE;

void create()
{
	set_name(HIW"������"NOR,({"dragon-tiger blade","blade"}));
    set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","���ſ�ɽ��ʦ -- ��念��嵶 , Ϊ�������� \n");
		set("value",0);
		set("material", "steel");
		set("wield_msg", "$N��������һ��$n�������С�\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(100);
	setup();
}
int wield()
{
	return notify_fail("������� , �㲻��ʹ�� , ���ԭ���� !\n");
	return 1;
}
int query_autoload()
{
	return 1;
}
