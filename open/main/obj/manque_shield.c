// manque_shield.c		designed by dos 95'12

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("ʧ���", ({ "manque shield", "shield"}));
	set_weight(2500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����ʧ�⽣�͵Ķ�, �����Ѿ�ĥ��������, 
���ǿ���������ʮ�ּ�̵�����. \n");
		set("value", 2000);
		set("material", "gold");
		set("armor_prop/armor", 15);
		set("armor_prop/dodge", -5);
	}
//  	init_sword(40);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wear_msg", "$N��$n���˳���, ������ǰ. \n");
	set("remove_msg", "$N��$n��������. \n");

// The setup() is required.

	setup();
}
