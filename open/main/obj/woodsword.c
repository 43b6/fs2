// sword.c : an example weapon

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("ľ��",({"wood sword","sword"}) );
	set_weight(7000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
	set("long","������ǿ�����õ�ľ����\n");
		set("material","wood");
	set("wield_msg","$N�ӱ���γ�$n�������С�\n");
		set("unwield_msg","$N�����е�$n�һر���\n");
	}
	init_sword(5);
	setup();
}
