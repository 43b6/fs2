// liu_blade.c

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("��Ҷ��", ({ "thin blade", "blade" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 800);
		set("material", "steel");
		set("long", "����һ��ʮ��ϸ���ĵ���ƽʱ���Բ������У��Է��ӳ����ѵ���ϮЧ����\n");
		set("wield_msg", "$N�������ս������е�$n��\n");
		set("unwield_msg", "$N�����е�$n�ջ����С�\n");
	}
	init_blade(40);
	setup();
}
