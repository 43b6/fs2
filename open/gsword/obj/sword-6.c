// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
            set_name("��ޱ��",({"purple sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","�ɽ������к�˫˫���佣���������ʺϺ�˫˫�������鶯\n");
		set("value",10000);
		set("material", "steel");
     set("wield_msg", "$N����һ����������һ��$n\n");
        set("unwield_msg", "$N��$n��������\n");
	}
	init_sword(60);
	setup();
}
