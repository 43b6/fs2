// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("[1;32m��[1;33mH[1;32m��[1;33m��[1;32m��[1;33mC[0m",({"han_thon_sword","sword"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",20000);
		set("material", "steel");
                set("wield_msg", "����$n,$N���Ϲ����Ц��Ц\n");
		set("unwield_msg", "$N�����е�$n��������Ľ��ʡ�\n");
	}
	init_sword(110);
	setup();
}
