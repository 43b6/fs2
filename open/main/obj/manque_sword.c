//	manque_sword.c		designed by dos	 95'12

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("ʧ�⽣", ({ "manque sword","sword"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "����ʧ�⽣�͵Ľ�, ������ʱ������ˮ,
�ͺ�����������\�Ƶ�. \n");
		set("value", 1500);
		set("material", "gold");
	}
	init_sword(40);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N৵�һ��, �ѽ����˳���, ��������������. \n");
	set("unwield_msg", "$N���������ϵ�$n�����Ĳ��뽣��. \n");

// The setup() is required.

	setup();
}
