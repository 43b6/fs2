// chicken_leg.c

#include <weapon.h>

inherit HAMMER;

void create()
{
	set_name("������", ({ "fried chicken leg", "chicken", "leg" }) );
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ֦���������缦�ȣ��㻹��ԥʲô��׼��θҺ�ɡ�\n");
		set("unit", "��");
		set("value", 30);
		set("ʳ��", ([
                        "ʣ" : 4,       // ���ԳԼ���
                        "��Ӧ": 40,     // ÿһ������ӵ���
                ]) );
		set("wield_msg", "$Nץ��һ��$n���������е�������\n");
		set("material", "bone");
	}
	init_hammer(1);
	setup();
}

int finish_eat()
{
	set_name("�еþ���ļ��ȹ�ͷ", ({ "bone" }) );
	set_weight(150);
	set("long", "һ���еþ���ļ��ȹ�ͷ��\n");
	return 1;
}
