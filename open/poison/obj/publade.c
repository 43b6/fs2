
#include <ansi.h>
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("�ӵ�",({"pu blade","blade"}) );
	set_weight(4000);
	if ( clonep())
		set_default_object(__FILE__);
else 	{
	set("long","һ�ѳ��ص���������Ĵ󵶣���ǿ���ǹ��õı���֮һ��\n");
	set("meterial","steel");
	set("value", 200);
	set("unit","��");
	set("wield_msg", "$N��������һ�����λεĴ󵶵�������\n");
	set("unwield_msg","$N�����ջ����еĵ����С�\n");
}
	init_blade(30);
	setup();
}


