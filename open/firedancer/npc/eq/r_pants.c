inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ��ȹ"NOR,({"rose finch's skirt","skirt"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ����ȹ����ȹ�ϻ�����ȸ�ĸ���\n");
		set("unit","��");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"����ȹ�ϵ���ȸ����ת���ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸ���񻺻������ˡ�\n"NOR);
		set("armor_prop/force",1);
		set("armor_prop/armor",-4);
	        set("armor_type","pants");
	}
	setup();
}