// bleed_whip.c
#include <ansi.h>
#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("ë��",({"towel"}));
	set_weight(100);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit","��");
	set("value",100);
		set("long",
"һ��ʪ͸��ë��\n");
	}
init_whip(0);
	setup();
}



