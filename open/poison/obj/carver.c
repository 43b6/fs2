
#include <ansi.h>
#include <weapon.h>

inherit BLADE;
void create()
{
	set_name("菜刀",({"carver"}) );
	set_weight(1500);
	if ( clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
一把背厚刃薄的菜刀，最适合妇人下厨时使用了，有些泼妇甚至喜欢拿它来
砍她老公:P\n");
		set("material","iron");
		set("value",70);
		set("unit","把");
	}
	init_blade(3);
	setup();
}

