inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIY"�ƽ�ӡ"NOR,({"golden seal","seal"}));
	set_weight(1000);
	if(clonep())
		set_default_object(__FILE__);
	else
	{
	set("value",10000);
	set("base_unit","��");
	set("unit","��");
	set("long",
"һ���ɻƽ�����˶�ɵ�ӡ�ӡ�\n");
	}
	set_amount(1);
	setup();
}