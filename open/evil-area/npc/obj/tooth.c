inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIR"��������"NOR,({"red-wolf tooth","tooth"}));
	set_weight(10);
	if(clonep())
		set_default_object(__FILE__);
	else
	{
	set("value",100);
	set("base_unit","��");
	set("unit","��");
	set("long",
"һֻ��ɫëƤ���ǣ��������������ݡ�\n");
	}
	set_amount(1);
	setup();
}