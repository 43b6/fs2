// short_sword.c

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("�̽�", ({ "short sword", "sword" }) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 400);
		set("material", "iron");
		set("long",
			"һ����ͨ�Ķ̽������ֲ����ò������˺ü�Ȧ�Է�ֹ�������֡�\n");
	}
	init_sword(8, SECONDARY);
	setup();
}
