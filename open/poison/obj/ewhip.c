#include <weapon.h>
#include <ansi.h>
inherit WHIP;
void create()
{
	set_name("ڤ�Ƴ���", ({"evil whip","whip"}));
	set_weight(500);

	if( clonep() )
             set_default_object(__FILE__);
else

{
	set("material","steel");
	set("value",300);
set("long","����һ��ڤ�ƽ�ͽ���õı��ӡ�\n");

	set("wield_msg", "$N�����ӻ����Ĵ�������£��������ϡ�\n");
	set("unwield_msg","$N�����ӷ��£��������ϡ�\n");
	set("unit", "��");
}
	init_whip(8);
	setup();
}

