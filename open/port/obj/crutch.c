// knife.c

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("����",({"crutch"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value",100);
		set("material","wood");
		set("long","����ľ���ƳɵĖ��� .\n");
		set("wield_msg","$N��$n�������� .\n");
		set("unwield_msg", "$N�����е�$n�������� .\n");
	}
	init_staff(5);
	setup();
}
