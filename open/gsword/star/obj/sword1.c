// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
   set_name("����֮��",({"star sword","sword"}));
set_weight(6700);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",2000);
		set("material", "steel");
                set("wield_msg","��$n�����ʳ��,�������������ԴԴ���ϵ���$nע��.\n");
		set("unwield_msg", "$N������$n�������ʵĽ���֮�С�\n");
	}
        init_sword(40);
	setup();
}
