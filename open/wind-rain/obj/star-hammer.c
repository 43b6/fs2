
#include <weapon.h>
#include <ansi.h>

inherit HAMMER;

void create()
{
	seteuid(getuid());
	set_name("���Ǵ�",({"star-hammer","hammer"}));
	set_weight(8000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");

		set("value",500);
		set("material", "steel");
	}
	init_hammer(45);

	setup();
}
