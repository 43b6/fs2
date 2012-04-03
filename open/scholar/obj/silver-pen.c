// sword.c : an example weapon
#include <ansi.h>
#include <weapon.h>

inherit STABBER;

void create()
{
    set_name("[1;37m��������[0m",({"scale pen","pen"}));
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",30000);
		set("material", "steel");
        set("wield_msg", "[1;37m$N����$n, [1;37m����ɢ��������!![0m\n");
        set("unwield_msg", "$N�����е�$n�������䡣\n");
	}
    init_stabber(100);
	setup();
}
