// ��ʯ by ACKY

#include <ansi.h>
inherit MONEY;

void create()
{
	set_name(HIW"��ʯ"NOR, ({"diamond","diamond_money"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("money_id", "diamond");
		set("long", "����Զ���������۹�������ҫ�۸��꣬��˵һ����ֵһ�����ƽ�����\n");
		set("unit", "��");
		set("base_value", 100000000); //��ֵһ�����ƽ�
		set("base_unit", "��");
		set("base_weight", 10);
	}
	set_amount(1);
	setup();
}
