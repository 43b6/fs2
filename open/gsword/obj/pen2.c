// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("��������",({"steel pen","pen"}));
        set_weight(20000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long",".\n");
        set("unit","֧");
        set("value", 1000);
        set("material","blacksteel");
	}
        init_stabber(40);
        set("wield_msg", "$N����������������ס��\n");
        setup();
}
