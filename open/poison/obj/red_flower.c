
#include <ansi.h>

inherit EQUIP;

void create()
{
	set_name(HIR"�컨"NOR,({ "red flower", "flower" }) );
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
else	{
	set("meterial","leather");
	set("unit","��");
	set("value", 0);
	set("armor_type","neck");
	set("armor_prop/armor", 1);
	set("long","
����һ���ʺ�ɫ�ĺ컨�����������Σ���֪�к��������塣\n");
	}
	setup();
}
