// knife.c

#include <weapon.h>

inherit STICK;

void create()
{
	set_name("����",({"fishing rod","rod"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",100);
		set("material","wood");
		set("long","һ��ľ�Ƶĵ��� , �ƺ����Ե����������� .\n");
		set("wield_msg","$N��$n�������� .\n");
		set("unwield_msg", "$N�����е�$n�������� .\n");
	}
	init_stick(5);
	setup();
}
