// liu_dart.c

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("��Ҷ��", ({ "thin dart", "dart" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("base_unit", "ö");
		set("unit", "ö");
		set("value", 1800);
		set("material", "steel");
		set("long", "����һöʮ��ϸ���ķ��ڣ�ƽʱ���Բ������У��Է��ӳ����ѵ���ϮЧ����\n");
		set("wield_msg", "$N�������ս������е�$n��\n");
		set("unwield_msg", "$N�����е�$n�ջ����С�\n");
	}
	init_throwing(60);
	set_amount(1);
	setup();
}
