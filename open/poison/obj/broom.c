
#include <ansi.h>
#include <weapon.h>
inherit HAMMER;
void create()
{
	set_name("ɨ��",({"broom"}) );
	set_weight(3000);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
һ�Ѵ�ɨʱ���õ�ɨ�㡣\n");
		set("material","iron");
	set("value",80);
		set("unit","��");
		}
	init_hammer(4);
	setup();
}
