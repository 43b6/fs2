
#include <ansi.h>
inherit EQUIP;

void create()
{
	set_name("�������",({"phoenix feather","feather"}) );
	set_weight(3000);
	if (clonep() )
		set_default_object(__FILE__);
	else{
		set("long","
�Է����Ϊ�����˿֯�ɵ�ͷ�Σ����������������ϡ�\n");

		set("armor_type","head");
		set("material","blacksteel");
		set("unit","��");
		set("armor_prop/armor",9);
		set("value",450);
		set("armor_prop/magic",2);
		setup();
	}
}
