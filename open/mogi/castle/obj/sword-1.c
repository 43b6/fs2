
#include <weapon.h>
#include <ansi.h>

inherit SWORD;

void create()
{
	seteuid(getuid());
	set_name("���⽣",({"in-fon-sword","sword"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","����ħ��֮��--���⽣\n");
		set("value",10000);
		set("material", "steel");
	}
	init_sword(60);
	setup();
}
