// green_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("水蛇长鞭",({"snake whip","whip"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit","条");
		set("value",1000);
		set("rigidity",30);
                set("material","ironsteel");
                set("long",
	"这是一条形如水蛇的长鞭。\n");
        }
	init_whip(25);
        setup();
}
