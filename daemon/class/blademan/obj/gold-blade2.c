//gold-blade.c
#include <weapon.h>
#include <ansi.h>

inherit BLADE;

void create()
{
	seteuid(getuid());
	set_name(HIY"�Ͻ�������"NOR,({"gold blade","blade"}));
	set_weight(15000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","һ�ѽ�������ı��� ,��������Ϊ���� .\n");
		set("value",1000000);
        set("no_steal",1);
		set("no_get",1);
		set("no_put",1);
		set("material", "crimsonsteel");
		set("rigidity",200);
		set("no_save",1);
                set("wield_msg", "����$n,$N���Ļ������������.\n");
		set("unwield_msg", "$N�����е�$n��������ĵ��ʡ�\n");
	}
	init_blade(100);
/*

	set("ski_type1", "blade");
	set("ski_type2", "gold-blade");
	set("ski_level1", 70);
	set("ski_level2", 70);
*/

	setup();
}
