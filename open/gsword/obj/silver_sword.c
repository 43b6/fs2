// sword.c : an example weapon
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
        set_name(HIW"���۹Ž�"NOR,({"silver sword","sword"}));
        set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("unit", "��");
         set("long","һ�ѹ��ⰻȻ�Ľ��������������������۵���Ƭ��\n");

                set("value",40000);
		set("material", "steel");
                set("ski_level",80);
                set("ski_type","sword");
         set("wield_msg", "$N����$n, �ƺ����ܵ������������ơ� \n");
	}
            init_sword(110);

	setup();
}
