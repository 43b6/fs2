// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("[1;31m��[1;35ml[1;31m��[1;35m��[1;31m��[1;35mC[0m",({"hon_water_sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",10000);
		set("material", "steel");
                set("wield_msg", "����$n,$N�ƺ����������޵�����.\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_sword(95);
	setup();
}
