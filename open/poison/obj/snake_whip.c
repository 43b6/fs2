// green_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("ˮ�߳���",({"snake whip","whip"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","��");
		set("value",1000);
		set("rigidity",30);
                set("material","ironsteel");
                set("long",
	"����һ������ˮ�ߵĳ��ޡ�\n");
        }
	init_whip(25);
        setup();
}
