// yensword.c

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("������", ({ "yen sword", "sword" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 3600);
		set("material", "steel");
		set("long",
			"����ǽ����˳ơ���������˾������ʹ�õĽ���������ѽ��µ��˶�Ĳ���������\n");
	}
	init_sword(60);
	setup();
}
