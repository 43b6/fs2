// badhelmet.c by Oda

#include <armor.h>

inherit HEAD;

void create()
{
	set_name("а��ͷ��", ({"bad helmet", "helmet"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("long", "����һ�������������ɵ�ͷ����ǿ���а���������׹����������Ҳꡣ\n");
	set("unit", "��");
	set("value", 100000);
	set("material", "steel");
	set("armor_prop/armor", 10);
	set("thunder", 100);
	set("wear_msg", "$N�����Ľ�$n���ϣ����ϵı���ͻȻ���������������\n");
	set("unequip_msg", "$N��$n�ѵ��������𽥻ָ���Ȼ��\n");
	}
	setup();
}
