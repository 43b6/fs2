// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
    set_name("���֮��"NOR,({"star sword","sword"}));
	set_weight(6700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",20000);
		set("material", "steel");
     set("wield_msg","��$n�����ʳ��,������诵�����ԴԴ���ϵ���$nע��.\n");
		set("unwield_msg", "$N������$n��������Ľ���֮�С�\n");
	}
        init_sword(55);
	setup();
}
