inherit EQUIP;
#include <ansi.h>

void create()
{
	set_name(HIR"��ȸ����"NOR,({"rose finch's neck","neck"}));
	set_weight(10000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long","���ɫ��һ��������ÿһ�����鶼������ȸ�ĸ���\n");
		set("unit","Ƭ");
		set("value",2000);
		set("material","crimsonsteel");
		set("wear_msg",HIR"$N����$n"HIR"��ÿ�����ӵ���ȸ����ת���ˡ�\n"NOR);
		set("unequip_msg",HIR"$N������$n"HIR"����ɫ����ȸ���񻺻������ˡ�\n"NOR);
		set("armor_prop/force",2);
		set("armor_prop/armor",-8);
	        set("armor_type","neck");
	}
	setup();
}