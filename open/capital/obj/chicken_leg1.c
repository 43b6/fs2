// chicken_leg.c

#include <weapon.h>

inherit HAMMER;

void create()
{
	set_name("���ƴ�������", ({ "chicken leg", "chicken", "leg" }) );
	set_weight(350);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long", "һ֦ͨ���ʺ�ļ��ȣ�մ�����Ƶ�������\n");
		set("unit", "��");
		set("value", 300);
		set("ʳ��", ([
                        "ʣ" : 5,       // ���ԳԼ���
                        "��Ӧ": 60,     // ÿһ������ӵ���
                ]) );
		set("wield_msg", "$Nץ��һ��$n���������е�������\n");
		set("material", "bone");
	}
	init_hammer(2);
	setup();
}

int finish_eat()
{
	set_name("�еþ���ļ��ȹ�ͷ", ({ "bone" }) );
	set_weight(150);
	set("long", "һ���еþ���ļ��ȹ�ͷ��\n");
	return 1;
}
