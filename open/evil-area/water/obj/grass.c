inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIG"�޲�"NOR,({"cotton grass","grass"}));
	set_weight(100);
	if( clonep() )
                set_default_object(__FILE__);
	else
	{
		set("value",1);
		set("base_unit","��");
		set("unit","��");
		set("long","������������н�����ܹ�ʳ�á�\n");
	}
	set_amount(1);
setup();
}