
#include <ansi.h>
#include <weapon.h>
inherit BLADE;

void create()
{
	set_name("��ͷ��",({"ghost glaive","glaive"}) );
	set_weight(12000);
	if ( clonep())
		set_default_object(__FILE__);
else 	{
	set("long","
һ�Ѽ�����صĴ󵶣�û�й��˵ı�������Ǿٲ������ģ������ϻ�����һ
�������Ĺ�ͷ��װ�Ρ�\n");
	set("meterial","steel");
	set("value", 500);
	set("unit","��");
	set("wield_msg", "$N��������һ�����λεĴ󵶵�������\n");
	set("unwield_msg","$N�����ջ����еĵ����С�\n");
}
	init_blade(40);
	setup();
}


