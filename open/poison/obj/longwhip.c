// bleed_whip.c
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("����",({ "long whip","whip"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
	  set("value",500);
		set("material","iron");
		set("long",
	"����һ����ͨ�ĳ��ޡ�\n");
	}
	init_whip(15);
	setup();
}
