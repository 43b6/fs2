inherit COMBINED_ITEM;
#include <ansi.h>

void create()
{
	set_name(HIR"(�ٻ���)ȼľ��"NOR,({"bad torch","torch"}));
	set_weight(100);
	if( clonep() )
                set_default_object(__FILE__);
	else
	{
		set("value",10);
		set("base_unit","��");
		set("unit","��");
		set("long","����һ���Ѿ�ȼ�չ���ľ�ģ��޷��ٶ�ȼ�ա�\n");
	}
	set_amount(1);
setup();
}