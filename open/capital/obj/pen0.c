// made by onion
#include <weapon.h>
inherit STABBER;
void create()
{
        set_name("���ֱ�",({"steel pen","pen"}) );
        set_weight(15000);
        if( clonep() )
		set_default_object(__FILE__);
	else {
        set("long","����������������������, �����ڡ�\n");
        set("unit","֧");
        set("value", 200);
        set("material","steel");
	}
        init_stabber(30);
        setup();
}
