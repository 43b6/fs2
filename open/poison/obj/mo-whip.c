// bleed_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
        set_name("Сħ��", ({"whip"}) );
	set_weight(500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
		set("value", 0);
		set("no_drop",1);
		set("material","iron");
		set("long",
	"����һ��СС�ı��ӣ��ǳ���������Я���Է���\n");
	}
	init_whip(3);
	setup();
}
