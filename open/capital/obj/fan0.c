// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("��Ǳ���",({"jade fan","fan"}) );
        set_weight(10000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","���Ϻô����Ƴɵı���, ���������й��⡣\n");
        set("unit","��");
        set("value", 1000);
        set("material","blacksteel");
	}
        init_stabber(25);
        setup();
}
