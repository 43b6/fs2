inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ�"NOR,({"rose finch's bracelet","bracelet"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ�������ڽӷ촦������ȸ�ĸ�ӡ��\n");
		set("unit","ֻ");
		set("value",2000);
		set("material","steel");
		set("wear_msg",HIR"$N����$n"HIR"����ϵ���ȸ��ӡ��졣\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸ��ӡ���������ˡ�\n"NOR);
		set("armor_prop/force",2);
		set("armor_prop/armor",-8);
	        set("armor_type","wrists");
	}
	setup();
}