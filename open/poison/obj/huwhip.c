// bleed_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("����",({ "dest whip","whip"} ));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
	  set("value",100);
		set("material","iron");
		set("long",
	"����һֻ������\n");
	}
	init_whip(5);
	setup();
}
